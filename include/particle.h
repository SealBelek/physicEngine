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
        void setMass(const real);
        real getMass() const;
        void setInverseMass(const real);
        real getInverseMass() const;
        bool hasFiniteMass() const;
        void setDamping(const real);
        real getDamping() const;
        void setPosition(const Vector3 &);
        void setPosition(const real, const real, const real);
        void getPosition(Vector3 *) const;
        Vector3 getPosition() const;
        void setVelocity(const Vector3 &);
        void setVelocity(const real, const real, const real);
        void getVelocity(Vector3 *) const;
        Vector3 getVelocity() const;
        void setAcceleration(const Vector3 &);
        void setAcceleration(const real, const real, const real);
        void getAcceleration(Vector3 *) const;
        Vector3 getAcceleration() const;
        void clearAccumulator();
        void addForce(const Vector3 &);
    };
}



#endif //PROJECT_PARTICLE_H
