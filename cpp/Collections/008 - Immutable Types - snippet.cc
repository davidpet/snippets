#include <iostream>
#include <vector>

// Define an immutable type
class ImmutableType {
public:
    const int x;
    const std::vector<int> vec;

    // Constructor
    ImmutableType(int x, std::vector<int> vec) : x(x), vec(vec) {}
};

int main() {
    // Create an instance of the immutable type
    std::vector<int> v = {1, 2, 3};
    ImmutableType obj(10, v);

    // Print the values
    std::cout << "x: " << obj.x << std::endl; // Expected output: x: 10
    std::cout << "vec: ";
    for (int i : obj.vec) {
        std::cout << i << " "; // Expected output: vec: 1 2 3
    }
    std::cout << std::endl;

    return 0;
}
