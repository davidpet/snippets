#include <iostream>

int main() {
    // std::function<int(auto)> f; // ILLEGAL

    auto lambda = [](auto x) -> auto { return x * x; };
    std::cout << lambda(10) << std::endl; // 100

    std::function<double(int)> di = lambda;
    std::cout << di(10) << std::endl; // 100

    int(*ptr)(int) = lambda;
    std::cout << ptr(10) << std::endl; // 100
    
    return 0;
}
