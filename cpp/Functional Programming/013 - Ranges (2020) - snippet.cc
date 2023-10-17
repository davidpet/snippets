#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using ranges to filter (odd numbers) and transform (square them)
    auto results = numbers 
                 | std::views::filter([](int n) { return n % 2 == 1; })
                 | std::views::transform([](int n) { return n * n; });

    // Display the squared odd numbers
    for (int n : results) {
        std::cout << n << " ";
    }

    return 0;
}
