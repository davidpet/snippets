#include <iostream>
#include <string>
#include <utility>  // for std::move

// A simple class to demonstrate
class MyClass {
private:
    std::string data;

public:
    MyClass(const std::string& d) : data(d) {
        std::cout << "Lvalue constructor called\n";
    }

    // Rvalue reference constructor
    MyClass(std::string&& d) : data(std::move(d)) {
        std::cout << "Rvalue constructor called\n";
    }

    const std::string& getData() const {
        return data;
    }
};

// Function taking an rvalue reference
void processValue(std::string&& str) {
    std::cout << "Rvalue function called with value: " << str << std::endl;
}

int main() {
    std::string regularString = "Hello, World!";
    
    // Using rvalue reference with class constructor
    MyClass obj1(regularString);            // Calls lvalue constructor
    MyClass obj2("Temporary String");       // Calls rvalue constructor

    // Using rvalue reference with a function
    processValue("Temporary for function"); // Can bind directly to rvalue

    std::string anotherString = "Another string";
    //processValue(anotherString);          // Error: lvalue provided to rvalue reference
    processValue(std::move(anotherString));  // std::move can convert lvalue to rvalue

    return 0;
}
