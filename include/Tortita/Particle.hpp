#ifndef TORTITA_PARTICLE
#define TORTITA_PARTICLE

#include "Tortita/util/Vec3.hpp"

namespace ttt
{
    /**
     * @brief A particle is the simplest object simulated in the physics engine
     * 
     */
    class Particle
    {
    public:
        /**
         * @brief Position of the particle
         * 
         */
        Vec3 pos;
        /**
         * @brief Velocity of the particle
         * 
         */
        Vec3 vel;
        /**
         * @brief Acceleration of the particle
         * 
         */
        Vec3 acc;
        /**
         * @brief Simulates drag force. Neccesary to avoid numerical inestability increasing the velocity
         * 
         */
        Real damping;
        /**
         * @brief Inverse mass of the object. Note that setting this to 0 creates an object with infinite mass, unmovable.
         * 
         */
        Real inverseMass;

        /**
         * @brief Updates particle's properties according to the time passed as argument
         * 
         * @param duration time since last tick
         */
        void tick(Real deltaTime);
    };
}

#endif