I'm sorry for the confusion, but C++ does not have a spread operator like JavaScript or Python. The spread operator is used to split an array into individual elements, which is not a feature that exists in C++. 

However, C++ does have a feature that is somewhat similar, which is the ability to pass an array to a function and have the function process the elements of the array. Here's an example of how you might do that:

#include <iostream>

// Function to print elements of an array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size); // Prints: 1 2 3 4 5

    return 0;
}