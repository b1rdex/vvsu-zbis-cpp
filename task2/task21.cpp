//
// Created by Anatoly on 05.03.2018.
//

#include <iostream>
#include "task21.h"

void task21() {
    std::string input, result;
    std::cout << "enter string: ";
    std::cin >> input;

    for (auto &&letter : input) {
        switch (letter)
        {
            case 'a':
                result += 'A';
                break;
            case 'b':
                result += 'B';
                break;
            default:
                result += letter;
                break;
        }
    }

    std::cout << result << std::endl;
}
