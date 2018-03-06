//
// Created by Anatoly on 06.03.2018.
//

#include <vector>
#include <iostream>
#include <algorithm>
#include "task61.h"
#include "Human.h"

void task61() {
    // Объявить тип-структуру humen, включающую имя человека, фамилию и год рождения.
    // Объявить два массива из четырёх элементов типа humen.
    // Ввести с консоли или из фай-ла элементы одного массива и построить на их основе другой,
    // упорядочив элементы по годам рождения. Вывести результат.

    std::vector<Human> input;

    std::cout << "Enter people" << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::string name, surname;
        int yob;

        std::cout << "Enter " << i << " name" << std::endl;
        std::cin >> name;

        std::cout << "Enter " << i << " surname" << std::endl;
        std::cin >> surname;

        std::cout << "Enter " << i << " year of birth" << std::endl;
        std::cin >> yob;

        input.emplace_back(new Human(name, surname, yob));
    }

    std::sort(input.begin(), input.end());
    std::cout << "Sorted result:" << std::endl;
    for (auto &human : input) {
        std::cout << human.name << " " << human.surname << " " << human.yob << std::endl;
    }
}
