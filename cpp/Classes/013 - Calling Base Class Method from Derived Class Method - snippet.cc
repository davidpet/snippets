#include <iostream>

// Base class
class Base {
public:
    // Base class method
    virtual void method() {
        std::cout << "Base class method called!" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Derived class method
    void method() override {
        // Calling base class method from derived class method
        std::cout << "Derived class method called!" << std::endl;
        Base::method();
    }
};

int main() {
    // Creating object of derived class
    Derived d;

    // Calling derived class method
    d.method(); // This will print: "Derived class method called" and then "Base class method called!"
    
    return 0;
}