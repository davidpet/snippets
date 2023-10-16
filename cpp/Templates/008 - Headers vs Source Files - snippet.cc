////////////////////////////
// MyLib.h
////////////////////////////
template <typename T>
class MyClass {
public:
    T data;
    MyClass(T val);
    
    template <typename U>
    void display(U extraData);

    void showData();  // Normal instance method
};

template <typename T>
void printValue(T value);

////////////////////////////
// MyLib.cc
////////////////////////////
// #include "MyLib.h"
#include <iostream>

// Definition for MyClass constructor
template <typename T>
MyClass<T>::MyClass(T val) : data(val) {}

// Definition for MyClass::display, which is also a function template
template <typename T>
template <typename U>
void MyClass<T>::display(U extraData) {
    std::cout << "Data: " << data << ", Extra: " << extraData << std::endl;
}

// Definition for the standard instance method MyClass::showData
template <typename T>
void MyClass<T>::showData() {
    std::cout << "Data: " << data << std::endl;
}

// Definition for function template printValue
template <typename T>
void printValue(T value) {
    std::cout << "Value: " << value << std::endl;
}

// Explicit instantiation to generate the required code
template class MyClass<int>; // instantiate MyClass with int
template void MyClass<int>::display<double>(double); // instantiate display with int and double
template void printValue<int>(int);  // explicit instantiation of printValue with int

////////////////////////////
// main.cc
////////////////////////////
// #include "MyLib.h"

int main() {
    MyClass<int> obj(5);
    obj.display<double>(3.14); // Data: 5, Extra: 3.14
    obj.showData(); // Data: 5

    printValue<int>(42); // Value: 42

    return 0;
}
