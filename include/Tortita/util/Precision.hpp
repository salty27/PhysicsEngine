#ifndef TORTITA_PRECISION
#define TORTITA_PRECISION

#include <cmath>

namespace ttt
{
    /**
     * @brief Define single or double precision of the engine
     * 
     */
    typedef float Real;

    /**
     * @brief Defines the precision of the square root
     * 
     */
    #define realSqrt sqrtf
    /**
     * @brief Defines the precision of the power operator
     * 
     */
    #define realPow powf
}

#endif