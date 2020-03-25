//
// Created by sealbelek on 18.03.2020.
//
#include "../include/particle.h"

using namespace physicEngine;

void Particle::integrate(physicEngine::real duration) {
    if (duration <= 0) return;;

    position.addScaledVector(velocity, duration); // обновить позицию
    Vector3 resultingAcc = acceleration;
    resultingAcc.addScaledVector(forceAccum, inverseMass);
    velocity.addScaledVector(resultingAcc, duration);
    velocity *= real_pow(damping, duration);
}

void Particle::setMass(const real mass) {
    if (mass != 0){
        inverseMass = ((real) 1.0) / mass;
    }
}

real Particle::getMass() const {
    if (inverseMass == 0) {
        return REAL_MAX;
    } else {
        return ((real)1.0)/inverseMass;
    }
}

void Particle::setInverseMass(const real newInverseMass) {
    inverseMass = newInverseMass;
}

real Particle::getInverseMass() const {
    return inverseMass;
}

bool Particle::hasFiniteMass() const {
    return inverseMass >= 0.0f;
}

void Particle::setDamping(const real newDamping) {
    damping = newDamping;
}

real Particle::getDamping() const {
    return damping;
}

void Particle::setPosition(const Vector3 &NewPosition) {
    position = NewPosition;
}

void Particle::getPosition(Vector3 *newPosition) const {
    *newPosition = position;
}

void Particle::setPosition(const real x, const real y, const real z) {
    position.setVector(x, y, z);
}

Vector3 Particle::getPosition() const {
    return position;
}

void Particle::setVelocity(const Vector3 &newVelocity) {
    velocity = newVelocity;
}

void Particle::setVelocity(const real x, const real y, const real z) {
    velocity.setVector(x, y, z);
}

void Particle::getVelocity(Vector3 *newVelocity) const {
    *newVelocity = velocity;
}

Vector3 Particle::getVelocity() const {
    return velocity;
}

void Particle::setAcceleration(const Vector3 &newAcceleration) {
    acceleration = newAcceleration;
}

void Particle::setAcceleration(const real x, const real y, const real z) {
    acceleration.setVector(x, y, z);
}

void Particle::getAcceleration(Vector3 *newAcceleration) const {
    *newAcceleration = acceleration;
}

Vector3 Particle::getAcceleration() const {
    return acceleration;
}

void Particle::clearAccumulator() {
    forceAccum.clear();
}

void Particle::addForce(const Vector3 &force) {
    forceAccum = force;
}

