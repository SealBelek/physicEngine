//
// Created by sealbelek on 18.03.2020.
//

#ifndef PROJECT_PARTICLE_H
#define PROJECT_PARTICLE_H

#include "core.h"

namespace physicEngine{

    class Particle
        /**
         * Простейший объект, который можно симулировать
         */
    {
        Vector3 position; // позиция частитцы в пространстве
        Vector3 velocity; // скорость в пространстве
        Vector3 acceleration; // ускорение частицы
        Vector3 forceAccum; // гравитация
        real damping; // содержит значение применяемое к движению. Обязательня для удаления энергии, появляющаяяся при интегрировании
        real inverseMass; // содержит инвертированную массу частицы. Полезнее иметь объект с бесконечной массой, чем с нулевой


    public:
        void integrate(real);
    };
}



#endif //PROJECT_PARTICLE_H
