Sure, here is a comprehensive code snippet demonstrating the use of Stack, Queue, and Deque in C++.

#include <iostream>
#include <stack>
#include <queue>
#include <deque>

int main() {
    // Stack demonstration
    std::stack<int> s;
    s.push(10); // Pushes 10 to the top of the stack
    s.push(20); // Pushes 20 to the top of the stack
    s.push(30); // Pushes 30 to the top of the stack

    std::cout << "Stack top: " << s.top() << std::endl; // Prints: Stack top: 30
    s.pop(); // Removes the top element
    std::cout << "Stack top after pop: " << s.top() << std::endl; // Prints: Stack top after pop: 20

    // Queue demonstration
    std::queue<int> q;
    q.push(40); // Pushes 40 to the end of the queue
    q.push(50); // Pushes 50 to the end of the queue
    q.push(60); // Pushes 60 to the end of the queue

    std::cout << "Queue front: " << q.front() << std::endl; // Prints: Queue front: 40
    q.pop(); // Removes the front element
    std::cout << "Queue front after pop: " << q.front() << std::endl; // Prints: Queue front after pop: 50

    // Deque demonstration
    std::deque<int> d;
    d.push_back(70); // Pushes 70 to the end of the deque
    d.push_front(80); // Pushes 80 to the front of the deque

    std::cout << "Deque front: " << d.front() << std::endl; // Prints: Deque front: 80
    std::cout << "Deque back: " << d.back() << std::endl; // Prints: Deque back: 70
    d.pop_front(); // Removes the front element
    d.pop_back(); // Removes the back element

    return 0;
}