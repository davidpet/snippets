## `constexpr` in C++

`constexpr` is a keyword introduced in C++11 that designates that the value of a variable or the result of a function can be evaluated at compile-time. This allows for more efficient code by computing values during compilation rather than at runtime. As of C++14 and later, `constexpr` functions can have multiple statements, loops, and conditions, making them even more versatile.

### Key Points:
- A `constexpr` variable means its value is constant and can be determined at compile time.
- A `constexpr` function guarantees that if you give it compile-time constants as arguments, it will produce a compile-time constant as a result.
- As of C++14, `constexpr` functions and constructors can contain simple logic such as loops and conditions.

### Examples:

1. **constexpr Variable**:
```cpp
constexpr int square = 10 * 10;
```

2. **constexpr Function (C++11)**:
```cpp
constexpr int add(int a, int b) {
    return a + b;
}

constexpr int result = add(5, 3);  // Evaluated at compile time
```

3. **constexpr Function with logic (C++14 and later)**:
```cpp
constexpr int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

constexpr int fact5 = factorial(5);  // Evaluated at compile time
```

4. **constexpr Constructor**:
```cpp
class Point {
public:
    int x, y;

    constexpr Point(int xVal, int yVal) : x(xVal), y(yVal) {}
};

constexpr Point origin(0, 0);
```

### Usage:

The primary advantage of using `constexpr` is performance. By computing values at compile-time rather than runtime, the generated machine code can be more efficient. It's especially useful for mathematical computations, lookup tables, or any value that doesn't change during the execution of the program.

The use of `constexpr` allows for powerful compile-time computations in C++, which can lead to more optimized generated code. While it can be tempting to make everything `constexpr`, it's essential to understand its trade-offs and use it judiciously.
