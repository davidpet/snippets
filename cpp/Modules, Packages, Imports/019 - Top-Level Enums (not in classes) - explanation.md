# Top-Level Enums (not in classes)
In the above code, we first define a top-level enum `Color` with three possible values: `RED`, `GREEN`, and `BLUE`. In the `main` function, we create a variable `myColor` of type `Color` and assign it the value `BLUE`. When we print `myColor`, it outputs `2`, because `BLUE` is the third value in the enum and enum values are zero-indexed by default. We also demonstrate how to use enums in a switch statement. When the switch statement is executed, it prints "Color is Blue" because `myColor` is `BLUE`.

Enums can also be defined with custom values, like so:

```cpp
#include <iostream>

// Define a top-level enum with custom values
enum StatusCode {
    SUCCESS = 200,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    NOT_FOUND = 404
};

int main() {
    // Use the top-level enum
    StatusCode code = NOT_FOUND;

    // Print the value of the enum
    std::cout << code << std::endl; // This will print: 404

    return 0;
}
```

##### 
In this code, we define a top-level enum `StatusCode` with four possible values, each assigned a custom integer value. In the `main` function, we create a variable `code` of type `StatusCode` and assign it the value `NOT_FOUND`. When we print `code`, it outputs `404`, because that's the custom value we assigned to `NOT_FOUND`.