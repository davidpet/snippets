# User-Defined Literals

User-defined literals (UDLs) are a powerful feature in C++ that allow you to define your own custom literals. Here's a detailed breakdown in markdown format:

---

## User-Defined Literals (UDLs) in C++

User-defined literals allow you to create custom suffixes for literals, enhancing code readability and expressiveness.

### Key Points:

1. **UDLs as Functions**: They are essentially functions that determine how a literal is processed. 
   
2. **Suffixes**: You can define custom suffixes for integral, floating-point, character, and string literals. For example, `123_km` or `5.5_kg`.

3. **Reserved for Compiler**: Suffixes without an underscore are reserved for future standardization. Therefore, user-defined literals should have an underscore (`_suffix`).

4. **Types**: UDLs can be defined for integral, floating-point, character, string, and even custom types.

### Example:

Let's create user-defined literals for representing distances in kilometers and miles:

```cpp
#include <iostream>

// User-defined literal for kilometers
constexpr long double operator"" _km(long double km) {
    return km * 1000;  // Convert km to meters
}

// User-defined literal for miles
constexpr long double operator"" _mi(long double miles) {
    return miles * 1609.34;  // Convert miles to meters
}

int main() {
    auto distance1 = 10.5_km;  // 10.5 kilometers in meters
    auto distance2 = 5.0_mi;   // 5.0 miles in meters

    std::cout << "10.5 km in meters: " << distance1 << std::endl;
    std::cout << "5.0 miles in meters: " << distance2 << std::endl;
}
```

### Custom Types:

You can also create UDLs for custom types. Here's an example for complex numbers:

```cpp
struct Complex {
    double real, imag;
};

Complex operator"" _i(long double val) {
    return {0, static_cast<double>(val)};
}

Complex operator"" _r(long double val) {
    return {static_cast<double>(val), 0};
}

int main() {
    Complex num = 5.5_r + 3.0_i;  // Represents 5.5 + 3i
    std::cout << "Complex number: " << num.real << " + " << num.imag << "i" << std::endl;
}
```

### Summary:

- User-defined literals enhance code expressiveness by allowing custom suffixes.
- Use them wisely to avoid obfuscation and to enhance clarity.

---
