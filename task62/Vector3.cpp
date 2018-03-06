//
// Created by Anatoly on 06.03.2018.
//

#include "Vector3.h"


const Vector3 Vector3::operator+(const Vector3 &that) const {
    return Vector3(this->p1 + that.p1, this->p2 + that.p2, this->p3 + that.p3);
}

const int Vector3::operator*(const Vector3 &that) const {
    return this->p1 * that.p1 + this->p2 * that.p2 + this->p3 * that.p3;
}

std::ostream &operator<<(std::ostream &os, const Vector3 &vector3) {
    os << "{" << vector3.p1 << "; " << vector3.p2 << "; " << vector3.p3 << "}";
    return os;
}

//Vector3::Vector3(Vector3 *vector) {
//    this->p1 = vector->p1;
//    this->p2 = vector->p2;
//    this->p3 = vector->p3;
//}
