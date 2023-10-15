#include <iostream>
#include <string>

class MyClass {
    int value;

public:
    // Implicit conversion from int
    MyClass(int v) : value(v) {
        std::cout << "Implicit conversion from int: " << value << std::endl;
    }

    // Explicit-only conversion from std::string
    explicit MyClass(const std::string& str) : value(std::stoi(str)) {
        std::cout << "Explicit conversion from std::string: " << value << std::endl;
    }

    // Implicit-friendly conversion to int
    operator int() const {
        std::cout << "Implicit-friendly conversion to int: " << value << std::endl;
        return value;
    }

    // Explicit-only conversion to std::string
    explicit operator std::string() const {
        std::cout << "Explicit-only conversion to std::string: " << value << std::endl;
        return std::to_string(value);
    }
};

int main() {
    // Using implicit conversion from int
    MyClass obj1 = 42;

    // Using explicit-only conversion from std::string
    MyClass obj2 = static_cast<MyClass>(std::string("123"));

    // Using implicit-friendly conversion to int
    int intValue = obj1;

    // Using explicit-only conversion to std::string
    std::string strValue = static_cast<std::string>(obj2);

    // Printing results
    std::cout << "intValue: " << intValue << std::endl; // 42
    std::cout << "strValue: " << strValue << std::endl; // 123

    return 0;
}

// Expected Output:
// Implicit conversion from int: 42
// Explicit conversion from std::string: 123
// Implicit-friendly conversion to int: 42
// Explicit-only conversion to std::string: 123
// intValue: 42
// strValue: 123
