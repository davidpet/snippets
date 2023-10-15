#include <iostream>

// Define a class named MyClass
class MyClass {
public:
    int myVar;

    // Constructor that takes an integer as an argument
    MyClass(int a) {
        // The 'this' keyword refers to the current instance of the class
        // Here, it is used to distinguish between the class member 'myVar' and the constructor argument 'a'
        this->myVar = a;
    }

    // Method that returns the current instance of the class
    MyClass* getThis() {
        // The 'this' keyword can be used to return a pointer to the current instance of the class
        return this;
    }

    // Method that compares the current instance with another instance
    bool isEqual(MyClass other) {
        // The 'this' keyword can be used to compare the current instance with another instance
        return this->myVar == other.myVar;
    }
};

int main() {
    // Create two instances of MyClass
    MyClass obj1(10);
    MyClass obj2(20);

    // Print the value of 'myVar' in 'obj1'
    std::cout << obj1.myVar << std::endl; // Expected output: 10

    // Print the value of 'myVar' in the instance returned by 'getThis()'
    std::cout << obj1.getThis()->myVar << std::endl; // Expected output: 10

    // Compare 'obj1' and 'obj2'
    std::cout << std::boolalpha << obj1.isEqual(obj2) << std::endl; // Expected output: false
}