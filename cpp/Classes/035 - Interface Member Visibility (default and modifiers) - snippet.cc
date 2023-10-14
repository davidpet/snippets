#include <iostream>

// Define a class with public, protected, and private members
class MyClass {
public:
    int publicVar = 10; // Public member variable

    void publicFunc() { // Public member function
        std::cout << "Public function called" << std::endl;
    }

protected:
    int protectedVar = 20; // Protected member variable

    void protectedFunc() { // Protected member function
        std::cout << "Protected function called" << std::endl;
    }

private:
    int privateVar = 30; // Private member variable

    void privateFunc() { // Private member function
        std::cout << "Private function called" << std::endl;
    }
};

// Define a derived class
class MyDerivedClass : public MyClass {
public:
    void accessBaseMembers() {
        std::cout << "Public variable: " << publicVar << std::endl; // Accessible
        std::cout << "Protected variable: " << protectedVar << std::endl; // Accessible

        publicFunc(); // Accessible
        protectedFunc(); // Accessible

        // std::cout << "Private variable: " << privateVar << std::endl; // Not accessible
        // privateFunc(); // Not accessible
    }
};

int main() {
    MyClass myClass;
    std::cout << "Public variable: " << myClass.publicVar << std::endl; // Prints: Public variable: 10
    myClass.publicFunc(); // Prints: Public function called

    // std::cout << "Protected variable: " << myClass.protectedVar << std::endl; // Not accessible
    // myClass.protectedFunc(); // Not accessible

    // std::cout << "Private variable: " << myClass.privateVar << std::endl; // Not accessible
    // myClass.privateFunc(); // Not accessible

    MyDerivedClass myDerivedClass;
    myDerivedClass.accessBaseMembers(); // Prints: Public variable: 10, Protected variable: 20, Public function called, Protected function called

    return 0;
}