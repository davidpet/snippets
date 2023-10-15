#include <iostream>

class MyClass {
    public:
        int x;

    // default constructor still here
};

void stackArray() {
    int x[] = {1, 2, 3, 4, 5}; // 5 elements
    int y[10] = {1}; // {1, 0, 0 ...}

    MyClass m[10];  // ok because has default c'tor
}

void multidimensional() {
    int z[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // int a[][] = {{1, 2, 3}, {4, 5, 6}}; // ILLEGAL
    int a[][3] = {{1, 2, 3}, {4, 5, 6}};
    int d[][1][1] = {{{1}}}; // only the first dimension can be empty
}

void heapArray() {
    // see Pointers snippet for more details
    int *p = new int[10];

    delete[] p;
}

void pointers() {
    int x[] = {1, 2, 3, 4, 5};
    int *p = x;
}

int main() {
    stackArray();
    multidimensional();

    return 0;
}