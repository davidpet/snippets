#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> dest;

    // Using back_inserter to dynamically append elements to dest
    std::copy(source.begin(), source.end(), std::back_inserter(dest));

    // Print dest
    for (int num : dest) {
        std::cout << num << ' ';
    }

    return 0;
}
