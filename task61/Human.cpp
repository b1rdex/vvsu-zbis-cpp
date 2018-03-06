//
// Created by Anatoly on 06.03.2018.
//

#include "Human.h"

Human::Human(std::string &name, std::string &surname, int yob) : name(name), surname(surname), yob(yob) {}

Human::Human(Human *human) {
    this->surname = human->surname;
    this->name = human->name;
    this->yob = human->yob;
}
