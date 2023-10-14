Sure, here is a code snippet demonstrating the use of some important built-in generic classes in C++.

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>

int main() {
    // Vector is a dynamic array that can grow and shrink at runtime.
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6); // Add an element at the end.
    std::cout << vec.back() << std::endl; // Prints: 6

    // Map is a sorted associative container that contains key-value pairs with unique keys.
    std::map<std::string, int> map = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};
    map["date"] = 4; // Add a key-value pair.
    std::cout << map["date"] << std::endl; // Prints: 4

    // Set is a container that contains a sorted set of unique objects.
    std::set<int> set = {1, 2, 3, 4, 5};
    set.insert(6); // Add an element.
    std::cout << *set.rbegin() << std::endl; // Prints: 6

    // Queue is a container adapter that provides a first-in, first-out (FIFO) data structure.
    std::queue<int> queue;
    queue.push(1); // Add an element at the end.
    std::cout << queue.front() << std::endl; // Prints: 1

    // Stack is a container adapter that provides a last-in, first-out (LIFO) data structure.
    std::stack<int> stack;
    stack.push(1); // Add an element at the top.
    std::cout << stack.top() << std::endl; // Prints: 1

    return 0;
}