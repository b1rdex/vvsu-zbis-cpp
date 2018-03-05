//
// Created by Anatoly on 05.03.2018.
//

#include <cmath>
#include <iostream>
#include "task1.h"

void task1() {
    // Объявить вещественные переменные a, b и с и задать их значения.
    // Предполагая, что a, b, c есть коэффициенты квадратного уравнения,
    // вывести на консоль значения их корней х1, х2

    int a = 3, b = 19, c = 1;
    double d = b * b - 4 * a * c;
    double x1 = (-b + sqrt(d)) / 2 * a;
    double x2 = (-b - sqrt(d)) / 2 * a;

    std::cout << "x1: " << x1 << ", x2: " << x2 << std::endl;
}
