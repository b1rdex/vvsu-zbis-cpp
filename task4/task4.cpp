//
// Created by Anatoly on 06.03.2018.
//

#include <iostream>
#include "task4.h"

void task4() {
    // Разместить в динамической памяти 2 массива – матрицу размерностью n на n и вектор длины n,
    // с элементами типа long double (значения n и элементы массивов ввести с кон-соли).
    // Написать функцию, вычисляющую произведение данной матрицы на данный вектор
    // (их передать по указателю) и возвращающую указатель на массив-результат.
    // Выдать на консоль значения полученного вектора.

    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    if (n <= 0) {
        return;
    }

    auto matrix = new long double *[n]();
    std::cout << "Enter matrix" << std::endl;
    for (int i = 0; i < n; i++) {
        matrix[i] = new long double[n]();
        for (int j = 0; j < n; j++) {
            std::cout << "enter matrix[" << i << "][" << j << "]: ";
            std::cin >> *(*(matrix + i) + j);
        }
    }

    auto vector = new long double[n]();
    std::cout << "Enter vector" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "vector[" << i << "]: ";
        std::cin >> *(vector + i);
    }

    auto result = multiply(n, matrix, vector);
    std::cout << "Result:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << *(result + i) << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] vector;
    delete[] result;
}

long double *multiply(int size, long double **matrix, long double *vector) {
    auto result = new long double[size]();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *(result + i) += *(vector + j) * (*(*(matrix + i) + j));
        }
    }

    return result;
}
