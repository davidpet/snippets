#include <iostream>
#include <vector>

// Function with trailing comma in parameter list
void printNumbers(int a, int b, int c,) {
    std::cout << a << " " << b << " " << c << std::endl; // Expected to print: a b c
}

// Function with trailing comma in initializer list
std::vector<int> getNumbers() {
    return {1, 2, 3,}; // Trailing comma in initializer list
}

int main() {
    printNumbers(1, 2, 3,); // Trailing comma in function call

    std::vector<int> numbers = getNumbers();
    for (int number : numbers) {
        std::cout << number << " "; // Expected to print: 1 2 3
    }

    return 0;
}