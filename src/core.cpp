//
// Created by seakbelek on 14.02.2020.
//

#include "../include/core.h"
#include <cmath>

using namespace physicEngine;

Vector3::Vector3(): x(0), y(0), z(0){}
Vector3::Vector3(const physicEngine::real x, const physicEngine::real y, const physicEngine::real z): x(x), y(y), z(z) {}

void Vector3::invert() {
    /**
     * инвертирует вектор
     */
    x = -x;
    y = -y;
    z = -z;
}

real Vector3::magnitude() {
    /**
     * длина вектора, модуль вектора
     */
    return real_sqrt(x*x+y*y+z*z);
}

real Vector3::squareMagnitude() {
    /**
     * квадрат длины вектора
     */
    return x*x+y*y+z*z;
}

void Vector3::normalize() {
    /**
     * направление вектора
     */
     real l = magnitude();
     if (l > 0)
     {
         (*this) *= ((real)1)/l;
     }
}

void Vector3::operator*=(const real value) {
    x *= value;
    y *= value;
    z *= value;
}

Vector3 Vector3::operator*(real value) {
    return Vector3(x*value, y*value, z*value);
}

void Vector3::operator+=(Vector3 &v) {
    x += v.x;
    y += v.y;
    z += v.z;
}

Vector3 Vector3::operator+(Vector3 &v) {
    return Vector3(x*v.x, y*v.y, z*v.z);
}

void Vector3::operator-=(Vector3 & v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
}
