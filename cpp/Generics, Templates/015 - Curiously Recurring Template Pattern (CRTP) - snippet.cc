Sure, here is a code snippet demonstrating the Curiously Recurring Template Pattern (CRTP) in C++:

#include <iostream>

// Base class template
template <typename Derived>
class Base {
public:
    void interface() {
        // This will call the implementation provided by the Derived class
        static_cast<Derived*>(this)->implementation();
    }

    void implementation() {
        std::cout << "Base implementation\n";
    }
};

// Derived class
class Derived : public Base<Derived> {
public:
    // This class provides its own implementation
    void implementation() {
        std::cout << "Derived implementation\n";
    }
};

int main() {
    Derived d;
    d.interface(); // This should print: Derived implementation
    return 0;
}