#include <iostream>
#include <variant>
#include <string>

int main() {
    std::variant<int, double, std::string> value;

    value = 10;
    if (std::holds_alternative<int>(value)) {
        std::cout << "Integer: " << std::get<int>(value) << "\n";
    }

    value = 3.14;
    if (std::holds_alternative<double>(value)) {
        std::cout << "Double: " << std::get<double>(value) << "\n";
    }

    value = "Hello";
    if (std::holds_alternative<std::string>(value)) {
        std::cout << "String: " << std::get<std::string>(value) << "\n";
    }

    // Safe retrieval using std::get_if
    if (auto v = std::get_if<double>(&value)) {
        std::cout << "Safe retrieval: " << *v << "\n";
    } else {
        std::cout << "Value is not a double!\n";
    }

    return 0;
}
