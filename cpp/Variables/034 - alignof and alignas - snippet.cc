#include <iostream>

struct S {
    int i; 
    double d;
};

int main() {
    // Using alignof to get alignment requirements
    std::cout << "Alignment of char: " << alignof(char) << "\n";
    std::cout << "Alignment of S: " << alignof(S) << "\n";
    std::cout << "Alignment of double: " << alignof(double) << "\n";
    
    // Using alignas to specify alignment
    alignas(double) int num = 42; // The 'num' variable will have the alignment of a double
    std::cout << "Alignment of num (aligned as double): " << alignof(decltype(num)) << "\n";

    alignas(16) char arr[100]; // The 'arr' char array will be aligned to a 16-byte boundary
    std::cout << "Alignment of arr (aligned to 16-byte boundary): " << alignof(decltype(arr)) << "\n";
}
