#include <iostream>

// Define a class named 'Demo'
class Demo {
    int x, y; // Declare two private member variables

public:
    // Default constructor
    Demo() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    Demo(int a, int b) {
        x = a;
        y = b;
    }

    // Copy constructor
    Demo(const Demo &d) {
        x = d.x;
        y = d.y;
    }

    // Destructor
    ~Demo() {
        // This will be called when an object goes out of scope or is deleted
    }

    // Function to display the values
    void display() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    // Create an object using the default constructor
    Demo d1;
    d1.display(); // Expected output: x: 0, y: 0

    // Create an object using the parameterized constructor
    Demo d2(5, 10);
    d2.display(); // Expected output: x: 5, y: 10

    // Create an object using the copy constructor
    Demo d3 = d2;
    d3.display(); // Expected output: x: 5, y: 10

    return 0;
}