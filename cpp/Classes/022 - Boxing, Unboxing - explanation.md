# Boxing/Unboxing
In the above code, we have a base class and a derived class. The derived class has an integer member. We create an object of the derived class and assign its address to a pointer of the base class. This is similar to boxing in C# or Java. Then we pass this pointer to a function that prints the value of the derived class. This is similar to unboxing.

Here is an example using std::any:

```cpp
#include <iostream>
#include <any>

int main() {
    std::any a = 10; // This is similar to boxing in C# or Java
    try {
        std::cout << std::any_cast<int>(a) << std::endl; // This will print: 10
    } catch (const std::bad_any_cast& e) {
        std::cout << "Bad cast: " << e.what() << std::endl;
    }
    return 0;
}
```
##### In the above code, we use std::any to store an integer. This is similar to boxing in C# or Java. Then we use std::any_cast to get the integer value from the std::any object. This is similar to unboxing. If the cast is not successful, a std::bad_any_cast exception is thrown.