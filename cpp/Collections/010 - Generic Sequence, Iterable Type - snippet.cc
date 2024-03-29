#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <array>

// C++ provides several generic sequence containers, including:
// 1. std::vector: dynamic array
// 2. std::list: doubly-linked list
// 3. std::deque: double-ended queue
// 4. std::forward_list: singly-linked list
// 5. std::array: static array

#include <iostream>

// Custom class that can be iterated.
class IntRange {
public:
    class Iterator {
        int current;
    public:
        Iterator(int value) : current(value) {}

        bool operator!=(const Iterator& other) const {
            return current != other.current;
        }

        int& operator*() {
            return current;
        }

        Iterator& operator++() {
            ++current;
            return *this;
        }
    };

    IntRange(int start, int end) : start_(start), end_(end) {}

    Iterator begin() const {
        return Iterator(start_);
    }

    Iterator end() const {
        return Iterator(end_);
    }

private:
    int start_, end_;
};

int main() {
    // std::vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int i : vec) {
        std::cout << i << " "; // prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    // std::list
    std::list<int> lst = {6, 7, 8, 9, 10};
    for (int i : lst) {
        std::cout << i << " "; // prints: 6 7 8 9 10
    }
    std::cout << std::endl;

    // std::deque
    std::deque<int> deq = {11, 12, 13, 14, 15};
    for (int i : deq) {
        std::cout << i << " "; // prints: 11 12 13 14 15
    }
    std::cout << std::endl;

    // std::forward_list
    std::forward_list<int> flst = {16, 17, 18, 19, 20};
    for (int i : flst) {
        std::cout << i << " "; // prints: 16 17 18 19 20
    }
    std::cout << std::endl;

    // std::array
    std::array<int, 5> arr = {21, 22, 23, 24, 25};
    for (int i : arr) {
        std::cout << i << " "; // prints: 21 22 23 24 25
    }
    std::cout << std::endl;

    // custom type
    IntRange range(2, 5);
    for (int value : range) {
        std::cout << value << std::endl;
    }
    // Output:
    // 2
    // 3
    // 4

    return 0;
}
