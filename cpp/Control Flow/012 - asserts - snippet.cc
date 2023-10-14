#include <cassert> // Include the cassert library to use assert
#include <iostream>

int main() {
    int x = 10;

    // Asserts are used to check if a condition is true. If the condition is false, the program will terminate.
    // Here, we assert that x is equal to 10. Since this is true, the program will continue.
    assert(x == 10);

    // Let's print to confirm that the program is still running
    std::cout << "x is equal to 10, so the program continues." << std::endl; // Expected output: "x is equal to 10, so the program continues."

    // Now, let's assert that x is equal to 5. This is false, so the program will terminate here.
    assert(x == 5);

    // This line will not be printed because the program has already terminated.
    std::cout << "This will not be printed." << std::endl; // No output expected

    return 0;
}