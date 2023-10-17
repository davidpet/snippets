# Priority Queue, Minheap, Maxheap

Priority Queue in C++ is a type of queue but unlike the traditional queue data structure, each element of the priority queue has a priority associated with it. The priority of the elements in a priority queue determines the deletion order.

In this code snippet, we first include the necessary libraries. We need `<queue>` for `priority_queue`, `<vector>` for `vector`, and `<functional>` for `greater<int>`.

We then declare a `priority_queue<int>` which is a max heap by default. We insert some elements using `push()` and print the top element using `top()`. We then remove the top element using `pop()` and print the top element again.

Next, we declare a `priority_queue<int, vector<int>, greater<int>>` which is a min heap. We insert some elements, print the top element, remove the top element, and print the top element again.

This code snippet demonstrates the basic usage of priority queues in C++, including both max heap and min heap. It shows how to insert elements, print the top element, and remove the top element.
