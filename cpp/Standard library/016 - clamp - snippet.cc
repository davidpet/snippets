#include <iostream>
#include <algorithm>

int main() {
    int x = 5;
    int y = 10;
    int z = 15;

    // Clamping values
    std::cout << std::clamp(x, 6, 14) << std::endl;  // Outputs 6 (clamped to lower bound)
    std::cout << std::clamp(y, 6, 14) << std::endl;  // Outputs 10 (no change as y is within bounds)
    std::cout << std::clamp(z, 6, 14) << std::endl;  // Outputs 14 (clamped to upper bound)

    return 0;
}
