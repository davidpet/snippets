#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello, World!";
    std::string prefix = "Hello";
    std::string suffix = "World!";

    // Check if s1 starts with "Hello"
    if (s1.starts_with(prefix)) {
        std::cout << "s1 starts with " << prefix << std::endl;
    }

    // Check if s1 ends with "World!"
    if (s1.ends_with(suffix)) {
        std::cout << "s1 ends with " << suffix << std::endl;
    }

    // You can also check directly with string literals or characters
    if (s1.starts_with('H')) {
        std::cout << "s1 starts with 'H'" << std::endl;
    }

    return 0;
}
