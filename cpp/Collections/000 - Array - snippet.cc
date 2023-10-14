#include <iostream>

// C++ provides a data structure, the array, which stores a fixed-size sequential collection of elements of the same type.
// An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

// Declaring arrays
int intArray[5]; // An integer array of size 5
char charArray[10]; // A character array of size 10

// Initializing arrays
int initializedArray[] = {1, 2, 3, 4, 5}; // An integer array of size 5, initialized with values

// Accessing array elements
std::cout << initializedArray[0] << std::endl; // Prints the first element of the array, expected output: 1

// Modifying array elements
initializedArray[0] = 10; // Changes the first element of the array to 10
std::cout << initializedArray[0] << std::endl; // Prints the first element of the array, expected output: 10

// Iterating over an array using a loop
for(int i = 0; i < 5; i++) {
    std::cout << initializedArray[i] << " "; // Prints each element of the array followed by a space
}
std::cout << std::endl; // Expected output: 10 2 3 4 5 

// Multidimensional arrays
int multiArray[2][2] = {{1, 2}, {3, 4}}; // A 2D array
std::cout << multiArray[0][0] << std::endl; // Prints the first element of the first array, expected output: 1

// Size of arrays
int arraySize = sizeof(initializedArray) / sizeof(initializedArray[0]); // Calculates the size of the array
std::cout << arraySize << std::endl; // Prints the size of the array, expected output: 5