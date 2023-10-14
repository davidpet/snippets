#include <iostream>

// A union is a special data type available in C++ that allows to store different types of data in the same memory location. 
// You can define a union with many members, but only one member can contain a value at any given time.

// Defining a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    Data data;  

    // Assigning and accessing int member
    data.i = 10;
    std::cout << "data.i: " << data.i << std::endl;  // Expected output: data.i: 10

    // Assigning and accessing float member
    data.f = 220.5;
    std::cout << "data.f: " << data.f << std::endl;  // Expected output: data.f: 220.5

    // Assigning and accessing string member
    strcpy(data.str, "C++ Programming");
    std::cout << "data.str: " << data.str << std::endl;  // Expected output: data.str: C++ Programming

    // Note that the values of i and f members of union became corrupted because the final value assigned to the variable has occupied the memory location and it is the value of str member that is being displayed correctly.

    return 0;
}