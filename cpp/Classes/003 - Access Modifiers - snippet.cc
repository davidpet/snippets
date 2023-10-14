#include <iostream>

// Define a class with public, protected, and private access modifiers
class MyClass {
public: // Public access modifier
    int publicVar = 10; // Public member

    // Public method
    void printPublicVar() {
        std::cout << "Public variable: " << publicVar << std::endl; // This will print the value of publicVar
    }

protected: // Protected access modifier
    int protectedVar = 20; // Protected member

private: // Private access modifier
    int privateVar = 30; // Private member

    // Private method
    void printPrivateVar() {
        std::cout << "Private variable: " << privateVar << std::endl; // This will print the value of privateVar
    }
};

// Define a derived class to demonstrate protected access modifier
class MyDerivedClass : public MyClass {
public:
    void printProtectedVar() {
        std::cout << "Protected variable: " << protectedVar << std::endl; // This will print the value of protectedVar
    }
};

int main() {
    MyClass myClass;
    MyDerivedClass myDerivedClass;

    // Accessing public member
    std::cout << "Public variable (direct access): " << myClass.publicVar << std::endl; // This will print the value of publicVar

    // Accessing public method
    myClass.printPublicVar(); // This will print the value of publicVar

    // Accessing protected member through derived class
    myDerivedClass.printProtectedVar(); // This will print the value of protectedVar

    // Uncommenting the following lines will cause a compile error because private members cannot be accessed directly
    // std::cout << myClass.privateVar << std::endl;
    // myClass.printPrivateVar();

    return 0;
}