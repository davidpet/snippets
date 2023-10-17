#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> nums = {4, 2, 7, 1, 9, 3, 6};
    std::vector<int> nums2 = {4, 2, 5, 8, 9};

    // Sort
    std::sort(nums.begin(), nums.end());

    // Find
    auto it = std::find(nums.begin(), nums.end(), 7);
    if(it != nums.end()) {
        std::cout << "Found 7 at position: " << std::distance(nums.begin(), it) << std::endl; // 5
    }

    // Count
    int count = std::count(nums.begin(), nums.end(), 7);
    std::cout << "Number 7 appears " << count << " times." << std::endl; // 1

    // Reverse
    std::reverse(nums.begin(), nums.end());

    // Replace
    std::replace(nums.begin(), nums.end(), 7, 70);

    // Copy to another vector
    std::vector<int> nums_copy(nums.size());
    std::copy(nums.begin(), nums.end(), nums_copy.begin());

    // Apply function to each element using for_each
    std::for_each(nums.begin(), nums.end(), [](int n) {
        std::cout << n << " "; // 9 70 6 4 3 2 1 
    });
    std::cout << std::endl;

    // Min and Max element
    auto minIt = std::min_element(nums.begin(), nums.end());
    auto maxIt = std::max_element(nums.begin(), nums.end());
    std::cout << "Min: " << *minIt << ", Max: " << *maxIt << std::endl; //1, 70

    // Fill
    std::fill(nums.begin(), nums.begin() + 3, 0);  // Fill the first 3 elements with zeros

    // Remove (followed by erasing from vector for cleanup)
    auto endIt = std::remove(nums.begin(), nums.end(), 6);
    nums.erase(endIt, nums.end());

    // Unique (for consecutive duplicates, requires sorting first)
    std::sort(nums.begin(), nums.end());
    endIt = std::unique(nums.begin(), nums.end());
    nums.erase(endIt, nums.end());

    // Accumulate
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    std::cout << "Sum of elements: " << sum << std::endl; // 10

    // All of, any of, none of
    bool allPositive = std::all_of(nums.begin(), nums.end(), [](int i) { return i > 0; });
    bool anyZero = std::any_of(nums.begin(), nums.end(), [](int i) { return i == 0; });
    bool noneNegative = std::none_of(nums.begin(), nums.end(), [](int i) { return i < 0; });

    std::cout << "All positive? " << allPositive 
              << ", Any zeros? " << anyZero 
              << ", None negative? " << noneNegative << std::endl; // 0, 1, 1

    // Binary search
    bool exists = std::binary_search(nums.begin(), nums.end(), 7);

    // Lower and Upper bound
    auto lb = std::lower_bound(nums.begin(), nums.end(), 5);
    auto ub = std::upper_bound(nums.begin(), nums.end(), 5);

    // Rotate
    std::rotate(nums.begin(), nums.begin() + 2, nums.end());

    // Shuffle
    // std::random_shuffle(nums.begin(), nums.end());  // Needs <random> in C++11

    // Transform
    std::transform(nums.begin(), nums.end(), nums.begin(), [](int n) { return n * 2; });

    // Set operations
    std::vector<int> union_result(nums.size() + nums2.size());
    std::vector<int>::iterator it2;
    it2 = std::set_union(nums.begin(), nums.end(), nums2.begin(), nums2.end(), union_result.begin());
    union_result.resize(it2 - union_result.begin());
    return 0;
}
