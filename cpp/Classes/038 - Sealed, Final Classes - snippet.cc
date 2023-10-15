#include <iostream>

// Base class
class Base {
public:
    virtual void show() {
        std::cout << "Base class\n";
    }
};

// Derived class from Base
class Derived final : public Base {
public:
    // Override show function
    void show() final { // Using final keyword to seal the show function
        std::cout << "Derived class\n";
    }
};

/*
// Another class trying to derive from Derived
class FurtherDerived : public Derived {
public:
    // Trying to override show function
    // void show() { // This will cause a compiler error
    //     std::cout << "Further Derived class\n";
    // }
};
*/

int main() {
    Base* base = new Base();
    base->show(); // This should print: Base class

    Base* derived = new Derived();
    derived->show(); // This should print: Derived class

    // Uncommenting the following lines will cause a compiler error
    // Base* furtherDerived = new FurtherDerived();
    // furtherDerived->show(); // This should print: Further Derived class

    delete base;
    delete derived;
    // delete furtherDerived;

    return 0;
}