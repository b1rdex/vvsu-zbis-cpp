//
// Created by Anatoly on 06.03.2018.
//

#ifndef VVSU_ZBIS_CPP_HUMAN_H
#define VVSU_ZBIS_CPP_HUMAN_H


#include <string>

class Human {
public:
    std::string name;
    std::string surname;
    int yob;

    Human(Human *human);

    Human(std::string &name, std::string &surname, int yob);

    bool operator<(const Human &rhs) const { return this->yob < rhs.yob; }
};


#endif //VVSU_ZBIS_CPP_HUMAN_H
