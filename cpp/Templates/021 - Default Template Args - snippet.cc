#include <iostream>
#include <string>

template<typename T, typename U = T, typename V = int>
void f(T t, U u, V v) {
    std::cout << t << " " << u << " " << v << std::endl;
}

int main() {
    f<std::string>("hi", "there", 3);

    return 0;
}
