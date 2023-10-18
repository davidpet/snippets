#include <tuple>
#include <iostream>

struct Point {
    int x, y;
};

std::tuple<int, double, std::string> get_data() {
        return {42, 3.14, "hello"};
}

int main() {
    auto [i, d, s] = get_data();
    std::cout << i << ", " << d << ", " << s << std::endl;  // Outputs: 42, 3.14, hello

    std::pair<int, std::string> p = {5, "five"};
    auto [num, word] = p;
    std::cout << num << ": " << word << std::endl;  // Outputs: 5: five

    Point pt = {1, 2};
    auto [xx, yy] = pt;
    std::cout << xx << ", " << yy << std::endl;  // Outputs: 1, 2

    int arr[] = {1, 2, 3};
    auto [a, b, c] = arr;
    std::cout << a << b << c << std::endl;  // Outputs: 123
}
