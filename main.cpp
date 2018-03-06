#include <iostream>
#include "task1/task1.h"
#include "task2/task21.h"
#include "task2/task22.h"
#include "task3/task3.h"
#include "task4/task4.h"
#include "task5/task5.h"
#include "task61/task61.h"

int main() {
    int task;
    while (true) {
        std::cout << "Enter task number: ";
//        std::cin >> task;
        task = 61;
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

            case 3:
                task3();
                break;

            case 4:
                task4();
                break;

            case 5:
                task5();
                break;

            case 61:
                task61();
                break;
        }
    }
}
