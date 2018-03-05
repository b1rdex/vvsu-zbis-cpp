//
// Created by Anatoly on 05.03.2018.
//

#include <iostream>
#include "task22.h"

void task22() {
    // Объявить массив данных типа int размером 3 на 3. Ввести с консоли его значения,
    // вывести на консоль сумму его элементов, расположенных на главной диагонали и сумму элементов,
    // расположенных на  побочной диагонали. Проверить, является ли матрица «магическим квадратом»
    // (в «магическом квадрате» суммы элементов по вертикали, горизонтали и диагонали равны).

    int matrix[3][3];
    int row, column;
    int temp;
    for (row = 0; row < 3; row++) {
        for (column = 0; column < 3; column++) {
            std::cout << "enter [" << row << "]" << "[" << column << "]: ";
            std::cin >> temp;
            matrix[row][column] = temp;
        }
    }

    int glavnaya = (matrix[0][0] + matrix[1][1] + matrix[2][2]);
    int pobochnaya = (matrix[0][2] + matrix[1][1] + matrix[2][0]);
    std::cout << "sum(glavnya): " << glavnaya << std::endl;
    std::cout << "sum(pobochnaya): " << pobochnaya << std::endl;

    bool isMagic = glavnaya == pobochnaya;
    int rowSum, colSum;
    if (isMagic) {
        for (row = 0; row < 3; row++) {
            rowSum = 0;
            for (column = 0; column < 3; column++) {
                rowSum = rowSum + matrix[row][column];
            }
            if (rowSum != glavnaya) {
                isMagic = false;
                break;
            }
        }
    }

    if (isMagic) {
        for (row = 0; row < 3; row++) {
            colSum = 0;
            for (column = 0; column < 3; column++) {
                colSum = colSum + matrix[column][row];
            }
            if (colSum != glavnaya) {
                isMagic = false;
                break;
            }
        }
    }

    std::cout << "is magic: " << (isMagic ? "true" : "false") << std::endl;
}
