#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

int main() {
    // Using std::function
    std::function<int(int, int)> add = [](int a, int b) { return a + b; };
    std::cout << "Addition using std::function: " << add(3, 4) << std::endl;

    // Using predicates
    std::vector<int> nums = {1, 3, 5, 6, 7, 8};
    int count_less_than_five = std::count_if(nums.begin(), nums.end(), std::bind(std::less<>(), std::placeholders::_1, 5));
    std::cout << "Numbers less than 5: " << count_less_than_five << std::endl;

    // Using logical operations
    auto is_even = [](int x) { return x % 2 == 0; };
    auto is_odd = std::not_fn(is_even);  // C++17's std::not_fn to negate a predicate
    int odd_count = std::count_if(nums.begin(), nums.end(), is_odd);
    std::cout << "Odd numbers count: " << odd_count << std::endl;

    // Using arithmetic operations
    std::transform(nums.begin(), nums.end(), nums.begin(), std::bind(std::multiplies<>(), std::placeholders::_1, 2));
    std::cout << "Numbers after multiplication by 2: ";
    for (int n : nums) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}
