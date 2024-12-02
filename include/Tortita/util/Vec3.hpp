#ifndef TORTITA_VEC3
#define TORTITA_VEC3

#include "Precision.hpp"

namespace ttt
{
    /**
     * @brief A 3D vector consisting of components (x, y, z)
     * 
     */
    class Vec3
    {
    public:
        Real x;
        Real y;
        Real z;

        Vec3();
        Vec3(const Real _x, const Real _y, const Real _z);

        /**
         * @brief Gets a Vec3 with the sign of its x,y,z components flipped
         * 
         */
        Vec3 invert() const;

        /**
         * @brief Gets the magnitude of the vector
         * 
         * @return Real Magnitude of the vector
         */
        Real magnitude() const;

        /**
         * @brief Gets the squared magnitude of the vector
         * 
         * @return Real Squared magnitude of the vector
         */
        Real squaredMagnitude() const;

        /**
         * @brief Gets the normalized vector
         * 
         * @return Vec3  Normalized vector
         */
        Vec3 normalize() const;

        /**
         * @brief Gets the component product of this vector and the argument
         * 
         * @param other The other vector
         * @return Vec3 Result of the component product
         */
        Vec3 component(const Vec3& other) const;
        /**
         * @brief Updates this vector with the result of the component product of this vector and the argument
         * 
         * @param other The other vector
         * @return Vec3& Reference to this vector
         */
        Vec3& componentUpdate(const Vec3& other);

        /**
         * @brief Gets the dot product of this vector and the other vector
         * 
         * @param other The other vector
         * @return Real The dot product
         */
        Real dot(const Vec3& other) const;

        /**
         * @brief Gets the cross product of this vector and the argument
         * 
         * @param other The other vector
         * @return Vec3 Cross product
         */
        Vec3 cross(const Vec3& other) const;

        /**
         * @brief Updates this vector with the cross product of this vector and the argument
         * 
         * @param other The other vector
         * @return Vec3& Reference to this vector
         */
        Vec3& crossUpdate(const Vec3& other);

        Vec3& operator+=(const Vec3& other);
        Vec3& operator-=(const Vec3& other);
        Vec3& operator*=(const Real other);
        Vec3& operator/=(const Real other);

        Vec3 operator+(const Vec3& other) const;
        Vec3 operator-(const Vec3& other) const;
        Vec3 operator*(const Real other) const;
        Vec3 operator/(const Real other) const;
    };
}


#endif