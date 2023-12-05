#include <iostream>
#include <string>

// Basic enum declaration
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

// Changing values
enum Color2 {
    YELLOW = 5,
    BLACK = 2 // would be 6 if didn't reassign it
};

// Enum with explicit values
enum class Planet : char {
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
    std::cout << sizeof(c) << std::endl; // Prints: 4 (because int)
    int x = c;
    std::cout << x << std::endl; // Prints: 2 (because implicitly integer)
    c = (Color)(BLUE + 1); // CAST REQUIRED
    std::cout << c << std::endl; // Prints: 3 (despite not being a Color value)

    // Using enum with explicit values
    Planet p = Planet::EARTH;
    std::cout << static_cast<int>(p) << std::endl; // Prints: 3
    // p = static_cast<Planet>(Planet::NEPTUNE + 1); // ILLEGAL
    std::cout << static_cast<int>(static_cast<Planet>(9)) << std::endl; // Prints: 9

    // Using strongly-typed enum
    TrafficLight t = TrafficLight::RED;
    // std::cout << t << std::endl; // This would cause a compile error because TrafficLight is strongly typed
    if (t == TrafficLight::RED) {
        std::cout << "Traffic light is red" << std::endl; // Prints: Traffic light is red
    }

    return 0;
}