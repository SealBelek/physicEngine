//
// Created by seakbelek on 14.02.2020.
//

#ifndef PROJECT_CORE_H
#define PROJECT_CORE_H

#include "precision.h"

namespace physicEngine{
    /**
     * вектор в 3 мерного измерения
     */
     class Vector3
     {
         real x;
         real y;
         real z;
     public:
         Vector3();
         Vector3(real, real, real);
         void invert();
         real magnitude();
         real squareMagnitude();
         void normalize();
         void operator*=(real);
         Vector3 operator*(real);
         void operator+=(Vector3 &);
         Vector3 operator+(Vector3 &);
         void operator-=(Vector3 &);
     };
}
#endif //PROJECT_CORE_H
