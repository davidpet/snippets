C++ does not have built-in garbage collection like languages such as Java or C#. Instead, it relies on the programmer to manually manage memory. This can lead to memory leaks if not done correctly. Here is an example of how to manage memory in C++ and how a memory leak can occur.

#include <iostream>

int main() {
    // Allocate memory for an integer on the heap
    int* p = new int;
    *p = 10;

    std::cout << *p << std::endl; // Prints: 10

    // Deallocate the memory
    delete p;

    // Allocate memory for an array of integers on the heap
    int* arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
        std::cout << arr[i] << " "; // Prints: 0 1 2 3 4 5 6 7 8 9
    }
    std::cout << std::endl;

    // Deallocate the array
    delete[] arr;

    // Memory leak example
    int* leak = new int;
    *leak = 20;

    std::cout << *leak << std::endl; // Prints: 20

    // Forgot to delete the memory, causing a memory leak
    // delete leak;

    return 0;
}