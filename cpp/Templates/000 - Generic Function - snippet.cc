#include <iostream>

// A simple generic function
template <typename T>
T get_max(T a, T b) {
    return (a > b) ? a : b;
}

// A generic function with more than one type parameter
template <typename T1, typename T2>
void print_pair(T1 a, T2 b) {
    std::cout << "Pair: (" << a << ", " << b << ")" << std::endl;
}

// A generic function with a non-type parameter
template <typename T, int size>
void print_array(T (&arr)[size]) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Using the generic function with integers
    std::cout << get_max(10, 20) << std::endl; // Expected output: 20

    // Using the generic function with doubles
    std::cout << get_max(15.6, 12.4) << std::endl; // Expected output: 15.6

    // Using the generic function with characters
    std::cout << get_max('a', 'z') << std::endl; // Expected output: z

    // Using the generic function with different types
    print_pair(5, "Hello"); // Expected output: Pair: (5, Hello)

    // Using the generic function with an array
    int arr[] = {1, 2, 3, 4, 5};
    print_array(arr); // Expected output: 1 2 3 4 5
}
