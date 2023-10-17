#include <iostream>
#include <valarray>

int main() {
    std::valarray<int> va1 = {1, 2, 3, 4, 5};
    std::valarray<int> va2 = {5, 4, 3, 2, 1};

    // Element-wise addition
    std::valarray<int> result = va1 + va2;

    for(size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    } // Outputs: 6 6 6 6 6
    return 0;
}
