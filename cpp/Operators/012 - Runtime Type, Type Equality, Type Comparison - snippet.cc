#include <iostream>
#include <typeinfo> // Required for 'typeid' to work

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {};

int main() {
    Base* base = new Base();
    Base* derived = new Derived();

    // typeid returns a reference to a type_info object
    // If the type is a polymorphic type, the type_info for the most derived type is returned
    // If the type is not a polymorphic type, the type_info for the static type is returned
    std::cout << typeid(*base).name() << std::endl; // Prints "4Base"
    std::cout << typeid(*derived).name() << std::endl; // Prints "7Derived"

    // Comparing types
    // The '==' and '!=' operators can be used to compare the type_info objects for equality or inequality
    if(typeid(*base) == typeid(*derived)) {
        std::cout << "Types are equal" << std::endl;
    } else {
        std::cout << "Types are not equal" << std::endl; // This will be printed
    }

    // Dynamic casting
    // dynamic_cast can be used to safely convert pointers and references to classes up, down, and sideways along the inheritance hierarchy
    // It returns a null pointer if the cast is not possible
    Derived* derived2 = dynamic_cast<Derived*>(base);
    if(derived2) {
        std::cout << "Cast successful" << std::endl;
    } else {
        std::cout << "Cast not successful" << std::endl; // This will be printed
    }

    delete base;
    delete derived;

    return 0;
}