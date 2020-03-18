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

Vector3 Vector3::operator*(const real value) const{
    return Vector3(x*value, y*value, z*value);
}

void Vector3::operator+=(const Vector3 &v) {
    x += v.x;
    y += v.y;
    z += v.z;
}

Vector3 Vector3::operator+(const Vector3 &v) const {
    return Vector3(x+v.x, y+v.y, z+v.z);
}

void Vector3::operator-=(const Vector3 &v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
}

Vector3 Vector3::operator-(const Vector3 &v) const {
    return Vector3(x-v.x, y-v.y, z-v.z);
}

void Vector3::addScaledVector(const Vector3 &vector, const real scale) {
    x += vector.x * scale;
    y += vector.y * scale;
    z += vector.z * scale;
}

Vector3 Vector3::componentProduct(const Vector3 &vector) const {
    return Vector3(x*vector.x, y*vector.y, z*vector.z);
}

real Vector3::scalarProduct(const Vector3 &vector) const {
    return x*vector.x + y*vector.y + z*vector.z;
}

real Vector3::operator*(const Vector3 &vector) const {
    return x*vector.x + y*vector.y + z*vector.z;
}

Vector3 Vector3::vectorProduct(const Vector3 &vector) const {
    return Vector3(y*vector.z-z*vector.y,
            z*vector.x-x*vector.z,
            x*vector.y-y*vector.x);
}

void Vector3::operator%=(const Vector3 &vector) {
    *this = vectorProduct(vector);
}

Vector3 Vector3::operator%(const Vector3 &vector) const {
    return Vector3(y*vector.z - z*vector.y,
            z*vector.x - x*vector.z,
            x*vector.y - y*vector.x);
}


