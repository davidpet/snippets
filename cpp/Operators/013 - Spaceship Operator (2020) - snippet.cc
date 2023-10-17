#include <iostream>

class Point {
    int x, y;

public:
    Point(int x, int y) : x(x), y(y) {}

    // Implementing the spaceship operator
    auto operator<=>(const Point& other) const {
        if (auto cmp = x <=> other.x; cmp != 0) return cmp;
        return y <=> other.y;
    }

    // Defaulting the equality operator
    bool operator==(const Point& other) const = default;
};

int main() {
    Point p1(1, 2), p2(1, 3);

    if (p1 < p2) {
        std::cout << "p1 is less than p2" << std::endl; // expected
    } else if (p1 == p2) {
        std::cout << "p1 is equal to p2" << std::endl;
    } else {
        std::cout << "p1 is greater than p2" << std::endl;
    }

    return 0;
}
