#include <iostream>

bool checkTrue() {
    std::cout << "True condition checked" << std::endl;
    return true;
}

bool checkFalse() {
    std::cout << "False condition checked" << std::endl;
    return false;
}

int main() {
    // Demonstrating short-circuiting with logical AND (&&)
    std::cout << "AND Short-circuiting:" << std::endl;
    if (checkFalse() && checkTrue()) {
        std::cout << "Both conditions checked" << std::endl;
    } else {
        std::cout << "Short-circuited at first condition" << std::endl; // This will be printed
    }

    // Demonstrating short-circuiting with logical OR (||)
    std::cout << "OR Short-circuiting:" << std::endl;
    if (checkTrue() || checkFalse()) {
        std::cout << "Short-circuited at first condition" << std::endl; // This will be printed
    } else {
        std::cout << "Both conditions checked" << std::endl;
    }

    return 0;
}