Sure, here is a comprehensive example of using friend functions in C++:

#include <iostream>

// Class declaration
class MyClass {
private:
    int privateVar;

public:
    MyClass() : privateVar(10) {}

    // Friend function declaration
    friend void accessPrivateVar(MyClass& obj);
};

// Friend function definition
void accessPrivateVar(MyClass& obj) {
    // Accessing private member of MyClass
    std::cout << "Private Variable: " << obj.privateVar << std::endl; // Expected output: Private Variable: 10
}

int main() {
    MyClass obj;
    accessPrivateVar(obj);
    return 0;
}