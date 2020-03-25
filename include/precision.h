//
// Created by seakbelek on 14.02.2020.
//

#ifndef PROJECT_PRECISION_H
#define PROJECT_PRECISION_H

#include <cmath>
#include <cfloat>

namespace physicEngine{
    /**
     * Определяем точность вещественного числа.
     */
     typedef double real;

#define real_sqrt sqrt
#define real_pow pow
#define REAL_MAX DBL_MAX
}
#endif //PROJECT_PRECISION_H
