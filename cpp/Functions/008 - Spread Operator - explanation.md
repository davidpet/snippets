# Spread Operator
In this code, we define a function `printArray` that takes an array and its size as parameters. Inside the function, we use a for loop to iterate over the elements of the array and print them. In the `main` function, we create an array and calculate its size, then pass the array and its size to the `printArray` function.

C++ also supports variadic templates, which can be used to create functions that take a variable number of arguments. Here's an example:

```cpp
#include <iostream>

// Base function
void print() {
    std::cout << " " << std::endl;
}

// Variadic template function
template<typename T, typename... Args>
void print(T first, Args... args) {
    std::cout << first << " ";
    print(args...); // Recursive call with reduced arguments
}

int main() {
    print(1, 2, 3, 4, 5); // Prints: 1 2 3 4 5

    return 0;
}
```
##### In this code, we define a variadic template function `print` that can take a variable number of arguments. The function prints the first argument, then makes a recursive call with the remaining arguments. This continues until all arguments have been printed. In the `main` function, we call the `print` function with five arguments.

Please note that variadic templates are a complex feature of C++ and should be used with care. They can lead to code that is difficult to understand and maintain if not used properly.