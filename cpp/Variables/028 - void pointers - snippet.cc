#include <iostream>

int main() {
    int *p = new int[]{1, 2};
    std::cout << *p << std::endl;

    void *v = p;
    // std::cout << *v << std::endl; // ILLEGAL
    std::cout << v << std::endl;
    // std::cout << v + 1 << std::endl; // ILLEGAL
    // v++;    // ILLEGAL
    // v = v + 1; // ILLEGAL
    std::cout << v << std::endl;

    int *q = static_cast<int*>(v);
    std::cout << *q << std::endl;

    delete [] p;

    return 0;
}
