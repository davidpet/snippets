#include <iostream>

// Generic template
template <typename T>
class Info {
public:
    void print() {
        std::cout << "This is a generic type." << std::endl;
    }
};

// Specialization for int
template <>
class Info<int> {
public:
    void print() {
        std::cout << "This is an integer type." << std::endl;
    }
};

// Specialization for double
template <>
class Info<double> {
public:
    void print() {
        std::cout << "This is a double type." << std::endl;
    }
};

// Specialization for char*
template <>
class Info<char*> {
public:
    void print() {
        std::cout << "This is a char* (C-string) type." << std::endl;
    }
};

int main() {
    Info<int> intInfo;
    intInfo.print();      // "This is an integer type."

    Info<double> doubleInfo;
    doubleInfo.print();   // "This is a double type."

    Info<char*> cstringInfo;
    cstringInfo.print();  // "This is a char* (C-string) type."

    Info<float> floatInfo;
    floatInfo.print();    // "This is a generic type."
    
    return 0;
}
