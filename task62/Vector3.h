//
// Created by Anatoly on 06.03.2018.
//

#ifndef VVSU_ZBIS_CPP_VECTOR_H
#define VVSU_ZBIS_CPP_VECTOR_H


#include <ostream>

class Vector3 {
public:
    Vector3(int p1, int p2, int p3) : p1(p1), p2(p2), p3(p3) {}

    int p1, p2, p3;

//    Vector3(Vector3 *vector);

    const Vector3 operator+(const Vector3 &that) const;

    const int operator*(const Vector3 &that) const;

    friend std::ostream &operator<<(std::ostream &os, const Vector3 &vector3);
};


#endif //VVSU_ZBIS_CPP_VECTOR_H
