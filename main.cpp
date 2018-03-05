#include <iostream>
#include "task1/task1.h"
#include "task2/task21.h"
#include "task2/task22.h"

int main() {
    int task;
    while (true) {
        std::cout << "Enter task number: ";
//        std::cin >> task;
        task = 22;
        switch (task) {
            case 0:
                std::cout << "Bye" << std::endl;
                return 0;

            default:
                std::cout << "No such task" << std::endl;
                break;

            case 1:
                task1();
                break;

            case 21:
                task21();
                break;

            case 22:
                task22();
                break;
        }
    }
}
