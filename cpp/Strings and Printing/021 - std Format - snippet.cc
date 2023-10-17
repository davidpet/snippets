#include <iostream>
#include <format>

int main() {
    int i = 42;
    double d = 3.14;
    std::string s = "hello";

    std::string result = std::format("Int: {}, Double: {:.2f}, String: {}", i, d, s);
    std::cout << result << std::endl;

    // Positional arguments
    std::string reordered = std::format("String: {2}, Int: {0}, Double: {1:.2f}", i, d, s);
    std::cout << reordered << std::endl;

    return 0;
}
