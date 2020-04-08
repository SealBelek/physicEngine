//
// Created by seakbelek on 14.02.2020.
//

#ifndef PROJECT_CORE_H
#define PROJECT_CORE_H

#include "precision.h"

namespace physicEngine{

     class Vector3
         /**
          * вектор в 3 мерного измерения
           */
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
         Vector3 operator*(real) const;
         void operator+=(const Vector3 &);
         Vector3 operator+(const Vector3 &) const;
         void operator-=(const Vector3 &);
         Vector3 operator-(const Vector3 &) const;
         void addScaledVector(const Vector3 &, real);
         Vector3 componentProduct(const Vector3 &) const;
         real scalarProduct(const Vector3 &vector) const;
         real operator*(const Vector3 &) const;
         Vector3 vectorProduct(const Vector3 &vector) const;
         void operator%=(const Vector3&);
         Vector3 operator%(const Vector3 &vector) const;
         void setVector(const real,const real, const real);
         void clear();
         real getX();
         real getY();
         real getZ();
     };
}
#endif //PROJECT_CORE_H
