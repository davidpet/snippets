#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// Define a template function to 'zip' two containers
template <typename T, typename U>
std::vector<std::pair<T, U>> zip(const std::vector<T>& a, const std::vector<U>& b) {
    std::vector<std::pair<T, U>> zipped;

    // Ensure that we iterate over the smallest container
    auto size = std::min(a.size(), b.size());

    // Resize the destination vector
    zipped.resize(size);

    // Use std::transform() to zip the containers
    std::transform(a.begin(), a.begin() + size, b.begin(), zipped.begin(),
                   [](const T& aa, const U& bb) { return std::make_pair(aa, bb); });

    return zipped;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<double> b = {2.2, 3.3, 4.4, 5.5, 6.6};

    // Zip the two vectors
    auto zipped = zip(a, b);

    // Print the zipped vector
    for (const auto& pair : zipped) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }

    return 0;
}
