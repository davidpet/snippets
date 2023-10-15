#include <iostream>

int main() {
    // 1. Implicit casting (coercion)
    int intVar = 10;
    double doubleVar = intVar; // Implicit casting from int to double
    std::cout << doubleVar << std::endl; // 10.0

    // 2. Explicit casting
    doubleVar = 20.5;
    intVar = (int)doubleVar; // Explicit casting from double to int
    std::cout << intVar << std::endl; // 20

    // 3. C++ style casting
    doubleVar = 30.7;
    intVar = static_cast<int>(doubleVar); // C++ style casting from double to int
    std::cout << intVar << std::endl; // 30

    // 4. Dynamic casting
    // It is used for polymorphism, converting base class pointer or reference to derived class pointer or reference
    class Base { virtual void dummy() {} };
    class Derived: public Base { int a; };

    Base *base = new Derived;
    Derived *derived = dynamic_cast<Derived*>(base); // Dynamic casting from base class pointer to derived class pointer
    std::cout << derived << std::endl; // any non-null pointer

    // 5. Const casting
    // It is used to add or remove constness of a variable
    const int constVar = 40;
    int* nonConstVar = const_cast<int*>(&constVar); // Const casting to remove constness
    *nonConstVar = 50;
    std::cout << constVar << std::endl; // 40
    std::cout << *nonConstVar << std::endl; // 50

    // 6. Reinterpret casting
    // It is used for low-level operations, converting one pointer type to another
    int* intPtr = new int(60);
    char* charPtr = reinterpret_cast<char*>(intPtr); // Reinterpret casting from int pointer to char pointer
    std::cout << *charPtr << std::endl; // Some character representation of 60

    return 0;
}