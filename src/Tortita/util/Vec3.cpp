#include "Tortita/util/Vec3.hpp"
using namespace ttt;

Vec3::Vec3() : x(0), y(0), z(0) {}
Vec3::Vec3(const Real _x, const Real _y, const Real _z) : x(_x), y(_y), z(_z) {}

/**
 * @brief Gets a Vec3 with the sign of its x,y,z components flipped
 * 
 */
Vec3 Vec3::invert() const
{
    return Vec3(-x, -y, -z);
}

/**
 * @brief Gets the magnitude of the vector
 * 
 * @return Real Magnitude of the vector
 */
Real Vec3::magnitude() const
{
    return realSqrt(x*x + y*y + z*z);
}

/**
 * @brief Gets the squared magnitude of the vector
 * 
 * @return Real Squared magnitude of the vector
 */
Real Vec3::squaredMagnitude() const
{
    return x*x + y*y + z*z;
}

/**
 * @brief Gets the normalized vector, or (0, 0, 0) if vector is of magnitude 0
 * 
 * @return Vec3  Normalized vector or (0, 0, 0)
 */
Vec3 Vec3::normalize() const
{
    Vec3 vec = Vec3(0, 0, 0);
    Real m = magnitude();
    if (m > 0)
    {
        vec *= ((Real)1) / m;
    }
    return vec;
}
/**
 * @brief Calculates the component product of two vectors
 * 
 * @param other The other vector
 * @return Vec3 Result of the component product
 */
Vec3 Vec3::component(const Vec3& other) const
{
    return Vec3(x * other.x, y * other.y, z * other.z); 
}
/**
 * @brief Updates this vector with the result of the component product
 * 
 * @param other The other vector
 * @return Vec3& Reference to this vector
 */
Vec3& Vec3::componentUpdate(const Vec3& other)
{
    x *= other.x;
    y *= other.y;
    z *= other.z;
    return *this;
}

/**
 * @brief Returns the dot product of this vector and the other vector
 * 
 * @param other The other vector
 * @return Real The dot product
 */
Real Vec3::dot(const Vec3& other) const
{
    return x*other.x + y*other.y + z*other.z;
}

 /**
 * @brief Gets the cross product of this vector and the argument
 * 
 * @param other The other vector
 * @return Vec3 Cross product
 */
Vec3 Vec3::cross(const Vec3& other) const
{
    return Vec3(y*other.z - z*other.y, z*other.x - x*other.z, x*other.y - y*other.x);
}

/**
 * @brief Updates this vector with the cross product of this vector and the argument
 * 
 * @param other The other vector
 * @return Vec3& Reference to this vector
 */
Vec3& Vec3::crossUpdate(const Vec3& other)
{
    //Store them as consts local variables to avoid calculating with the overwritten value
    const Real _x = x;
    const Real _y = y;
    x = _y*other.z - z*other.y;
    y = z*other.x - _x*other.z;
    z = _x*other.y - _y*other.x;
    return *this;
}

Vec3& Vec3::operator+=(const Vec3& other)
{
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}
Vec3& Vec3::operator-=(const Vec3& other)
{
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}
Vec3& Vec3::operator*=(const Real other)
{
    x *= other;
    y *= other;
    z *= other;
    return *this;
}
Vec3& Vec3::operator/=(const Real other)
{
    x /= other;
    y /= other;
    z /= other;
    return *this;
}
Vec3 Vec3::operator+(const Vec3& other) const
{
    return Vec3(x + other.x, y + other.y, z + other.z);
}
Vec3 Vec3::operator-(const Vec3& other) const
{
    return Vec3(x - other.x, y - other.y, z - other.z);
}
Vec3 Vec3::operator*(const Real other) const
{
    return Vec3(x*other, y*other, z*other);
}
Vec3 Vec3::operator/(const Real other) const
{
    return Vec3(x/other, y/other, z/other);
}