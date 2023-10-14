Sure, here is a code snippet demonstrating the concept of Type Erasure in C++ using templates. Type Erasure is a technique that allows you to hide the concrete type of an object and instead expose only its behavior.

#include <iostream>
#include <memory>

// Define an interface for our type-erased object
struct AnyShape {
    virtual ~AnyShape() = default;
    virtual void draw() const = 0;
};

// Define a concrete implementation of the interface for each type we want to erase
template <typename T>
struct ShapeWrapper : AnyShape {
    T shape;
    ShapeWrapper(const T& s) : shape(s) {}
    void draw() const override { shape.draw(); }
};

// Define a class that can hold any shape, regardless of its concrete type
class Shape {
    std::unique_ptr<AnyShape> shape;
public:
    template <typename T>
    Shape(const T& s) : shape(new ShapeWrapper<T>(s)) {}

    void draw() const { shape->draw(); }
};

// Define some concrete shapes
struct Circle {
    void draw() const { std::cout << "Drawing a circle\n"; }
};

struct Square {
    void draw() const { std::cout << "Drawing a square\n"; }
};

int main() {
    Circle c;
    Square s;

    Shape shape1 = c; // shape1 now holds a Circle
    Shape shape2 = s; // shape2 now holds a Square

    shape1.draw(); // Prints: Drawing a circle
    shape2.draw(); // Prints: Drawing a square

    return 0;
}