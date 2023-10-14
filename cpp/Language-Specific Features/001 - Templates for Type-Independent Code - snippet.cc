Sure, here is a comprehensive example of using templates in C++ for type-independent code:

#include <iostream>

// A simple function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

// A class template
template <typename T>
class MyArray {
private:
    T arr[10];
public:
    void set(int index, T value) {
        arr[index] = value;
    }

    T get(int index) {
        return arr[index];
    }
};

// A template with multiple type parameters
template <typename T, typename U>
bool are_equal(T a, U b) {
    return a == b;
}

int main() {
    // Using the function template with int
    std::cout << add<int>(3, 4) << std::endl; // Prints: 7

    // Using the function template with double
    std::cout << add<double>(3.5, 4.5) << std::endl; // Prints: 8.0

    // Using the class template with int
    MyArray<int> intArray;
    intArray.set(0, 10);
    std::cout << intArray.get(0) << std::endl; // Prints: 10

    // Using the class template with std::string
    MyArray<std::string> strArray;
    strArray.set(0, "Hello");
    std::cout << strArray.get(0) << std::endl; // Prints: Hello

    // Using the template with multiple type parameters
    std::cout << std::boolalpha << are_equal<int, double>(3, 3.0) << std::endl; // Prints: true
    std::cout << std::boolalpha << are_equal<std::string, const char*>("Hello", "Hello") << std::endl; // Prints: true

    return 0;
}