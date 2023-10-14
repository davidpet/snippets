Sure, here is a code snippet demonstrating the concept of Multiple Inheritance in C++.

#include<iostream>

// Base class 1
class Animal {
public:
    void eat() {
        std::cout << "I can eat!" << std::endl;
    }
};

// Base class 2
class Mammal {
public:
    void breathe() {
        std::cout << "I can breathe!" << std::endl;
    }
};

// Derived class
class Dog : public Animal, public Mammal {
public:
    void bark() {
        std::cout << "I can bark! Woof Woof!" << std::endl;
    }
};

int main() {
    Dog d1;
    d1.eat(); // prints: I can eat!
    d1.breathe(); // prints: I can breathe!
    d1.bark(); // prints: I can bark! Woof Woof!
    return 0;
}