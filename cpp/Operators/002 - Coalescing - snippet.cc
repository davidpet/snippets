#include <iostream>
#include <optional>

int main() {
    // Declare and initialize optional variables
    std::optional<int> opt1 = 1;
    std::optional<int> opt2 = std::nullopt;

    // Use the coalescing operator to assign the value of opt1 to a new variable
    // If opt1 has a value, it will be assigned to var1. If not, the default value (0) will be assigned.
    int var1 = opt1.value_or(0);
    std::cout << var1 << std::endl; // Expected output: 1

    // Use the coalescing operator to assign the value of opt2 to a new variable
    // If opt2 has a value, it will be assigned to var2. If not, the default value (0) will be assigned.
    int var2 = opt2.value_or(0);
    std::cout << var2 << std::endl; // Expected output: 0

    return 0;
}