#include <iostream>
#include <any>
#include <string>

int main() {
    std::any item;

    // Storing an integer
    item = 10;
    std::cout << "Integer: " << std::any_cast<int>(item) << "\n";

    // Storing a string
    item = std::string("Hello");
    std::cout << "String: " << std::any_cast<std::string>(item) << "\n";

    // Checking type
    if (item.type() == typeid(std::string)) {
        std::cout << "Item holds a string!" << "\n";
    }

    // Resetting the content
    item.reset();
    if (!item.has_value()) {
        std::cout << "Item is now empty!" << "\n";
    }

    return 0;
}
