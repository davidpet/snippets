C++ does not directly support covariance and contravariance in the same way as some other languages like C# or Java. However, it does support a form of covariance through its support for polymorphism and inheritance, and it can mimic contravariance through the use of templates.

Here is a code snippet demonstrating covariance:

#include <iostream>

// Base class
class Animal {
public:
    virtual ~Animal() {}
    virtual Animal* clone() const = 0;
};

// Derived class
class Dog : public Animal {
public:
    Dog* clone() const override { return new Dog(*this); }
};

int main() {
    Dog d;
    Animal* a = &d;
    Animal* clone = a->clone(); // Covariant return type
    if(dynamic_cast<Dog*>(clone)) {
        std::cout << "Covariance works!" << std::endl; // This will be printed
    }
    delete clone;
    return 0;
}