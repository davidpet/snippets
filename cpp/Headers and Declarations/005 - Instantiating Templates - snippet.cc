Sure, here is a comprehensive example of how to instantiate templates in C++:

#include <iostream>

// Define a simple template class
template <class T>
class MyTemplateClass {
public:
    MyTemplateClass(T x) {
        value = x;
    }
    T getValue() {
        return value;
    }
private:
    T value;
};

// Define a template function
template <class T>
T myTemplateFunction(T x, T y) {
    return x > y ? x : y;
}

int main() {
    // Instantiate the template class with int
    MyTemplateClass<int> myIntObject(10);
    std::cout << myIntObject.getValue() << std::endl; // Expected output: 10

    // Instantiate the template class with double
    MyTemplateClass<double> myDoubleObject(20.5);
    std::cout << myDoubleObject.getValue() << std::endl; // Expected output: 20.5

    // Instantiate the template function with int
    std::cout << myTemplateFunction<int>(10, 20) << std::endl; // Expected output: 20

    // Instantiate the template function with double
    std::cout << myTemplateFunction<double>(10.5, 20.5) << std::endl; // Expected output: 20.5

    return 0;
}