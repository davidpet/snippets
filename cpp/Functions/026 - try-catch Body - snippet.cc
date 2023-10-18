#include <iostream>

void f()
    try {
        std::cout << "Hi!" << std::endl;
    }
    catch (...) {
        // handle exceptions here
    }

int main() {
    f();
    
    return 0;
}
