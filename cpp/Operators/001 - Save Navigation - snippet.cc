I'm sorry for the confusion, but there seems to be a misunderstanding. In C++, there is no operator or concept known as "Save Navigation". C++ has a variety of operators such as arithmetic operators, relational operators, logical operators, bitwise operators, assignment operators, and others. 

If you're referring to the safe navigation operator (?.) or null-conditional operators, these are not available in C++. These operators are used in languages like C#, Groovy, and Kotlin to prevent null reference exceptions by testing an object for null before invoking a method or property.

In C++, you would typically check for null before accessing members. Here is an example:

#include <iostream>

class Test {
public:
    void print() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    Test* test = nullptr;

    // Check for null before accessing members
    if (test != nullptr) {
        test->print(); // This won't be executed as test is null
    } else {
        std::cout << "Object is null" << std::endl; // This will be printed
    }

    return 0;
}