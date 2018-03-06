//
// Created by Anatoly on 06.03.2018.
//

#include <iostream>
#include <vector>
#include "task62.h"
#include "Vector3.h"

void task62() {
    // Объявить класс векторов размерности 3.
    // Переопределить для него операции сложения, и произведения (как векторного).
    // Ввести с консоли или из файла значения координат двух векторов,
    // вывести результат их сложения и векторного произведения.

    std::cout << "Enter vectors:" << std::endl;
    std::vector<Vector3> vectors;
    int p1, p2, p3;
    for (int i = 0; i < 2; ++i) {
        std::cout << "Enter vector " << i << " p1: ";
        std::cin >> p1;
        std::cout << "Enter vector " << i << " p2: ";
        std::cin >> p2;
        std::cout << "Enter vector " << i << " p3: ";
        std::cin >> p3;

        auto vector = Vector3(p1, p2, p3);
        std::cout << "Vector " << i << ": " << vector << std::endl;
        vectors.emplace_back(vector);
    }

    auto sum = vectors[0] + vectors[1];
    std::cout << "Sum result: " << std::endl;
    std::cout << sum << std::endl;

    auto multiplication = vectors[0] * vectors[1];
    std::cout << "Multiplication result: " << std::endl;
    std::cout << multiplication << std::endl;

    getchar();
}
