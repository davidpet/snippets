#include <iostream>
#include <cmath>

class Vector2D {
private:
    double x, y;

    mutable int z; // can be changed from 'const' function
public:
    // Constructor
    Vector2D(double x, double y) : x(x), y(y) {}

    // Getter for x (const-correctness ensured)
    double getX() const { z = 100; return x; }

    // Getter for y (const-correctness ensured)
    double getY() const { return y; }

    // Setter for x
    void setX(double newX) { x = newX; }

    // Setter for y
    void setY(double newY) { y = newY; }

    // Calculate magnitude of the vector
    // The const after the method means it won't modify any member variables of the object
    double magnitude() const {
        return std::sqrt(x*x + y*y);
    }

    // A non-const version that prints a message (to demonstrate overloading)
    double magnitude() {
        std::cout << "Calling non-const magnitude function." << std::endl;
        return std::sqrt(x*x + y*y);
    }
};

int main() {
    const Vector2D vec1(3, 4);  // const object
    Vector2D vec2(5, 12);       // non-const object

    // Calling magnitude on const object will use the const version
    std::cout << "Magnitude of vec1: " << vec1.magnitude() << std::endl;

    // Calling magnitude on non-const object will use the non-const version
    std::cout << "Magnitude of vec2: " << vec2.magnitude() << std::endl;

    return 0;
}
