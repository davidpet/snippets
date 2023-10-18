#include <iostream>
#include <functional>
#include <vector>

int main() {
    int x = 10, y = 20;
    
    // Using reference_wrapper directly
    std::reference_wrapper<int> wrap_x(x);
    std::cout << "wrap_x: " << wrap_x << "\n";  // Prints 10
    ++wrap_x.get();  // Modify x through wrap_x
    std::cout << "x: " << x << "\n";  // Prints 11

    // Using std::ref and std::cref
    std::vector<std::reference_wrapper<int>> vec;
    vec.push_back(std::ref(x));  // Store reference to x in vec
    vec.push_back(std::ref(y));  // Store reference to y in vec

    x = 15;
    y = 25;
    for (auto& r : vec) {
        std::cout << r << " ";  // Prints 15 25
    }
    std::cout << "\n";

    // Be cautious: Ensure the referenced objects outlive the reference_wrapper
    // Using a dangling reference_wrapper results in undefined behavior.
}
