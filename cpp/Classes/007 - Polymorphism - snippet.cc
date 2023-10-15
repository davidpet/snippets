#include <iostream>

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() {
        std::cout << "This is a generic animal sound" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the virtual function
    void sound() override {
        std::cout << "Woof!" << std::endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Override the virtual function
    void sound() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* animal = new Animal();
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    animal->sound(); // This will print: This is a generic animal sound
    dog->sound(); // This will print: Woof!
    cat->sound(); // This will print: Meow!

    delete animal;
    delete dog;
    delete cat;

    return 0;
}