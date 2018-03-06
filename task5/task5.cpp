//
// Created by Anatoly on 06.03.2018.
//

#include <cstdio>
#include <iostream>
#include "task5.h"

void task5() {
    // Создать в редакторе текстовый файл с записями следующего вида:
    // Иванов Петр Сергеевич 1975
    // Сидоров Николай Андреевич 1981
    // Воробьянинов Ипполит Матвеевич 1978
    // ….
    // Прочитать данные из этого файла и записать в другой только те строки, которые относятся к родившимся позднее 1980 года.

    FILE *input, *output;

    if ((input = fopen("task5-in.txt", "rt")) == nullptr) {
        std::cout << "No input file";
        return;
    }

    if ((output = fopen("task5-out.txt", "w")) == nullptr) {
        std::cout << "Can't open output file";
        return;
    }

    char line[1024];
    int temp;
    char temp1[1024];
    int wrote = 0;
    while (fgets(line, 1023, input)) {
        std::cout << "Read " << line;
        if (sscanf(line, "%s %s %s %d", &temp1, &temp1, &temp1, &temp) > 0 && temp > 1980) {
            std::cout << "Wrote " << line;
            fputs(line, output);
            wrote++;
        }
    }

    std::cout << "Wrote " << wrote << " lines" << std::endl;

    fclose(input);
    fclose(output);
}
