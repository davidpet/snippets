#include <iostream>

int main() {
    // lambda with no capture -> FP
    int (*fn)(int) = [](int x) { return x * x;};
    std::cout << fn(10) << std::endl; // 100

    // lambda with capture -> FP
    int x = 10;
    // int (*fn2)() = [x]() { return x * x;}; // ILLEGAL

    std::function<int()> fn3 = [x]() { return x * x;};
    std::cout << fn3() << std::endl; // 100
    
    return 0;
}
