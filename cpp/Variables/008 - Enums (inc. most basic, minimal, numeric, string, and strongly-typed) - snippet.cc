#include <iostream>
#include <string>

// Basic enum declaration
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

// Enum with explicit values
enum class Planet : int {
    MERCURY = 1,
    VENUS = 2,
    EARTH = 3,
    MARS = 4,
    JUPITER = 5,
    SATURN = 6,
    URANUS = 7,
    NEPTUNE = 8
};

// Strongly-typed enum (enum class)
enum class TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Using basic enum
    Color c = BLUE;
    std::cout << c << std::endl; // Prints: 2

    // Using enum with explicit values
    Planet p = Planet::EARTH;
    std::cout << static_cast<int>(p) << std::endl; // Prints: 3

    // Using strongly-typed enum
    TrafficLight t = TrafficLight::RED;
    // std::cout << t << std::endl; // This would cause a compile error because TrafficLight is strongly typed
    if (t == TrafficLight::RED) {
        std::cout << "Traffic light is red" << std::endl; // Prints: Traffic light is red
    }

    return 0;
}