#include <iostream>

// Abstract Base Class
class AbstractClass {
public:
    // Pure virtual function providing interface framework.
    virtual int getArea() = 0;

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// Subclass 1
class Rectangle: public AbstractClass {
public:
    int getArea() {
        return (width * height);
    }
};

// Subclass 2
class Triangle: public AbstractClass {
public:
    int getArea() {
        return (width * height)/2;
    }
};

int main() {
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);
    // Print the area of the object.
    std::cout << "Total Rectangle area: " << Rect.getArea() << std::endl; // Expected output: Total Rectangle area: 35

    Tri.setWidth(5);
    Tri.setHeight(7);
    // Print the area of the object.
    std::cout << "Total Triangle area: " << Tri.getArea() << std::endl; // Expected output: Total Triangle area: 17

    return 0;
}