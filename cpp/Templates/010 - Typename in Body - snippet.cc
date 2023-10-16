#include <iostream>

template <typename T>
class Wrapper {
public:
    using ValueType = T; // Just an example to have an inner type
};

template <typename T>
void printSize() {
    // Without 'typename', compiler doesn't know if ValueType is a type or a static member.
    // We use 'typename' to tell the compiler it's a type.
    typedef typename T::ValueType InnerType; 

    std::cout << "Size of InnerType: " << sizeof(InnerType) << std::endl;
}

int main() {
    printSize<Wrapper<int>>(); // 4
    return 0;
}
