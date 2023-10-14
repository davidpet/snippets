#include <iostream>
#include <vector>
#include <map>

int main() {
    // 1. Using index operator with arrays
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "Third element of array: " << arr[2] << std::endl; // Expected output: 3

    // 2. Using index operator with vectors
    std::vector<int> vec = {6, 7, 8, 9, 10};
    std::cout << "First element of vector: " << vec[0] << std::endl; // Expected output: 6

    // 3. Using index operator with maps
    std::map<std::string, int> map;
    map["one"] = 1;
    map["two"] = 2;
    std::cout << "Value at key 'two': " << map["two"] << std::endl; // Expected output: 2

    // 4. Using index operator to modify elements
    arr[2] = 10;
    vec[0] = 20;
    map["one"] = 30;
    std::cout << "Modified third element of array: " << arr[2] << std::endl; // Expected output: 10
    std::cout << "Modified first element of vector: " << vec[0] << std::endl; // Expected output: 20
    std::cout << "Modified value at key 'one': " << map["one"] << std::endl; // Expected output: 30

    return 0;
}