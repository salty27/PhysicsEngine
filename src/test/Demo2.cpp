#include "Tortita/Particle.hpp"
#include <chrono>
#include <iostream>

int main()
{
    ttt::Particle p1;
    p1.pos = ttt::Vec3(0, 3, 0);

    ttt::Particle p2;
    p2.pos = ttt::Vec3(0, 0, 0);
    p2.acc = ttt::Vec3(1, 0, 0);

    std::chrono::steady_clock clock;
    auto time = clock.now();
    std::cout << "P1: " << p1.pos.x << ' ' << p1.pos.y << ' ' << p1.pos.z << '\n'; 
    std::cout << "P2: " << p2.pos.x << ' ' << p2.pos.y << ' ' << p2.pos.z << '\n'; 
    for (int i = 0; i < 10; i++)
    {
        auto newTime = clock.now();
        std::chrono::nanoseconds nanoTime = newTime - time;
        time = newTime;
        ttt::Real deltaTime = ((ttt::Real)nanoTime.count())/std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::seconds(1)).count();
        p1.tick(deltaTime);
        p2.tick(deltaTime);
        std::cout << "P1: " << p1.pos.x << ' ' << p1.pos.y << ' ' << p1.pos.z << '\n'; 
        std::cout << "P2: " << p2.pos.x << ' ' << p2.pos.y << ' ' << p2.pos.z << '\n'; 
    }
}