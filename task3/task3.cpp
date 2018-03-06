//
// Created by Anatoly on 05.03.2018.
//

#include <iostream>
#include <cmath>
#include "task3.h"

void task3() {
    // Написать функции, вычисляющие периметр и площадь треугольника по значениям длин трёх его сторон.
    // Разместить их в отдельном модуле (отличном от того, где располагается функция main( )).
    // Ввести с консоли значения длин сторон треугольника (с проверкой на корректность неравенства треугольника)
    // и выдать на консоль вычисленные с помощью написанных функций значения его периметра и площади.

    int a, b, c;
    std::cout << "enter a: ";
    std::cin >> a;
    std::cout << "enter b: ";
    std::cin >> b;
    std::cout << "enter c: ";
    std::cin >> c;

    if (a > (b + c) || b > (a + c) || c > (a + b)) {
        std::cout << "triangle inequality test failed" << std::endl;
        return;
    }

    std::cout << "Perimeter: " << perimeter(a, b, c) << ", Square: " << square(a, b, c) << std::endl;
}

int perimeter(int a, int b, int c) {
    return a + b + c;
}

/**
 * Heron's formula triangle square
 * @see https://en.wikipedia.org/wiki/Heron%27s_formula
 */
double square(int a, int b, int c) {
    double s = perimeter(a, b, c) / 2.;

    return sqrt(s * (s - a) * (s - b) * (s - c));
}
