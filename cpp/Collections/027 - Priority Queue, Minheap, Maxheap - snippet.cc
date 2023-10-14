Sure, here is a comprehensive code snippet demonstrating the use of Priority Queue, Minheap, and Maxheap in C++.

#include <iostream>
#include <queue> // Required for priority_queue
#include <vector> // Required for vector
#include <functional> // Required for greater<int>

using namespace std;

int main() {
    // Priority Queue in C++ is a type of queue but unlike the traditional queue data structure, 
    // each element of the priority queue has a priority associated with it. 
    // The priority of the elements in a priority queue determines the deletion order.

    // By default, the priority queue uses max heap. The top element will be the maximum and it's in descending order.
    priority_queue<int> pq;

    // Inserting elements into the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // Printing the top element
    cout << "Top element (Max Heap): " << pq.top() << endl; // Expected output: 30

    // Removing the top element
    pq.pop();

    // Printing the top element after removing the previous top element
    cout << "Top element after pop (Max Heap): " << pq.top() << endl; // Expected output: 20

    // We can also create a Min Heap priority queue by using 'greater' in the declaration.
    // The top element will be the minimum and it's in ascending order.
    priority_queue<int, vector<int>, greater<int>> pq_min;

    // Inserting elements into the min heap priority queue
    pq_min.push(10);
    pq_min.push(30);
    pq_min.push(20);
    pq_min.push(5);

    // Printing the top element
    cout << "Top element (Min Heap): " << pq_min.top() << endl; // Expected output: 5

    // Removing the top element
    pq_min.pop();

    // Printing the top element after removing the previous top element
    cout << "Top element after pop (Min Heap): " << pq_min.top() << endl; // Expected output: 10

    return 0;
}