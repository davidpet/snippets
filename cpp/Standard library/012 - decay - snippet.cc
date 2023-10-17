#include <iostream>
#include <type_traits>

void foo() {}

int main() {
    int x = 5;

    // Array to pointer decay
    int arr[10];
    std::cout << std::boolalpha;
    std::cout << "Is an array? " << std::is_same<decltype(arr), int[10]>::value << '\n';
    std::cout << "Decayed to pointer? " << std::is_same<std::decay_t<decltype(arr)>, int*>::value << '\n';

    // Function to function pointer decay
    std::cout << "Is a function? " << std::is_same<decltype(foo), void()>::value << '\n';
    std::cout << "Decayed to function pointer? " << std::is_same<std::decay_t<decltype(foo)>, void(*)()>::value << '\n';

    // Removal of const, volatile, and reference
    const volatile int& y = x;
    std::cout << "Is a reference? " << std::is_same<decltype(y), const volatile int&>::value << '\n';
    std::cout << "Decayed removes const, volatile, and reference? " 
              << std::is_same<std::decay_t<decltype(y)>, int>::value << '\n';

    return 0;
}
