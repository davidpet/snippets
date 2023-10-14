Sure, here is a code snippet demonstrating the declaration and implementation of templates in C++.

#include <iostream>

// Template Declaration
template <typename T>
class MyTemplateClass;

// Template Implementation
template <typename T>
class MyTemplateClass {
public:
    MyTemplateClass(T x) {
        this->value = x;
    }
    void display() {
        std::cout << value << std::endl; // This will print the value of the object
    }
private:
    T value;
};

// Template Function Declaration
template <typename T>
void myTemplateFunction(T x);

// Template Function Implementation
template <typename T>
void myTemplateFunction(T x) {
    std::cout << x << std::endl; // This will print the value passed to the function
}

int main() {
    // Using the template class with an int
    MyTemplateClass<int> myObject(10);
    myObject.display(); // This will print: 10

    // Using the template class with a string
    MyTemplateClass<std::string> myObject2("Hello World");
    myObject2.display(); // This will print: Hello World

    // Using the template function with an int
    myTemplateFunction<int>(20); // This will print: 20

    // Using the template function with a string
    myTemplateFunction<std::string>("Hello C++"); // This will print: Hello C++
    
    return 0;
}