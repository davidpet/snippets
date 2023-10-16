#include <iostream>
#include <functional>

// Define a class template that takes a function type as its template argument
template <typename FuncType>
class FunctionInvoker {
public:
    void invoke(FuncType func, int a, int b) {
        func(a, b);
    }
};

// Sample function that matches the type
void sampleFunction(int x, int y) {
    std::cout << "Function called with: " << x << ", " << y << std::endl;
}

void anotherFunction(int a, int b) {
    std::cout << "Another function called with: " << a << ", " << b << std::endl;
}

// Define a class template that takes a function type as its template argument
template <void(*Func)(int, int)>
class FunctionInvoker2 {
public:
    void invoke(int a, int b) {
        Func(a, b);
    }
};

int main() {
    FunctionInvoker<void(int, int)> invoker;

    invoker.invoke(sampleFunction, 10, 20); // "Function called with: 10, 20"
    invoker.invoke(anotherFunction, 30, 40); // "Another function called with: 30, 40"

    FunctionInvoker2<sampleFunction> invoker2;
    invoker2.invoke(10, 20);   // "Function called with: 10, 20"

    return 0;
}
