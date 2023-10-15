#include <iostream>

// Define a class named MyClass
class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Destructor
    virtual ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};

class DerivedClass : public MyClass {};

int main() {
    // Create an object of MyClass
    MyClass obj;

    MyClass *p = new DerivedClass();
    delete p;
    
    // The destructor will be called automatically when obj goes out of scope
    return 0;
}
