#include <iostream>

// Base class
class Animal {
public:
    // A public function to demonstrate inheritance
    void eat() {
        std::cout << "I can eat!" << std::endl;
    }

    // A public variable to demonstrate inheritance
    int age;
};

// Derived class
class Dog : public Animal {
public:
    // A function in the derived class
    void bark() {
        std::cout << "I can bark! Woof woof!" << std::endl;
    }
};

// Another derived class demonstrating multiple levels of inheritance
class Puppy : public Dog {
public:
    // A function in the second level derived class
    void weep() {
        std::cout << "I can weep! Woof woof!" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.eat(); // This should print: "I can eat!"
    dog.bark(); // This should print: "I can bark! Woof woof!"

    Puppy puppy;
    puppy.eat(); // This should print: "I can eat!"
    puppy.bark(); // This should print: "I can bark! Woof woof!"
    puppy.weep(); // This should print: "I can weep! Woof woof!"
    
    return 0;
}