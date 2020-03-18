//
// Created by sealbelek on 18.03.2020.
//
#include "../include/particle.h"

using namespace physicEngine;

void Particle::integrate(physicEngine::real duration) {
    if (duration <= 0) return;;

    position.addScaledVector(velocity, duration);
    Vector3 resultingAcc = acceleration;
    resultingAcc.addScaledVector(forceAccum, inverseMass);
    velocity.addScaledVector(resultingAcc, duration);
    velocity *= real_pow(damping, duration);
}
