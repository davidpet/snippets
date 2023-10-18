#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Double each element in the vector using parallel execution
    std::for_each(std::execution::par, v.begin(), v.end(), [](int& n) {
        n *= 2;
    });

    // Print the results
    for (int i : v) {
        std::cout << i << " ";
    }
}
