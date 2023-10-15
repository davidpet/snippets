#include <iostream>

// Define a class to represent a Fibonacci sequence
class Fibonacci {
public:
    // Define a nested class to represent an iterator
    class iterator {
    public:
        iterator(int n = 0) : cur1(1), cur2(1), i(n) {}

        // Overload the dereference operator
        int operator*() const { return cur1; }

        // Overload the pre-increment operator
        iterator& operator++() {
            int temp = cur1;
            cur1 = cur2;
            cur2 += temp;
            ++i;
            return *this;
        }

        // Overload the equality operator
        bool operator!=(const iterator& other) const {
            return i != other.i;
        }

    private:
        int cur1, cur2, i;
    };

    // Constructor
    Fibonacci(int n) : n(n) {}

    // Begin and end iterators
    iterator begin() const { return iterator(0); }
    iterator end() const { return iterator(n); }

private:
    int n;
};

int main() {
    // Print the first 10 Fibonacci numbers
    for (int i : Fibonacci(10)) {
        std::cout << i << " ";  // Expected output: 1 1 2 3 5 8 13 21 34 55
    }

    return 0;
}