#include "Tortita/Particle.hpp"
#include <cassert>
using namespace ttt;

void Particle::tick(Real deltaTime)
{
    assert((deltaTime > 0.0) &&  "Time since last tick can't be negative");

    pos += vel*deltaTime;
    Vec3 totalAcc = acc;
    //force accum is probably the result of all forces applied. As of now, let's just have gravity as a placeholder. Gravity
    Vec3 forceAccum = Vec3(0, -10, 0);
    totalAcc += forceAccum*inverseMass;

    vel += totalAcc*deltaTime;
    vel *= realPow(damping, deltaTime);
}