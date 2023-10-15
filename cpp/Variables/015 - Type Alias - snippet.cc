#include <iostream>
#include <string>

// Type alias allows you to create a new name for an existing type.
// The syntax to create a type alias in C++ is: using new_type_name = existing_type_name;

// Here we are creating a type alias for int as integer
using integer = int;

// We can also create type alias for complex types like std::string as string
using string = std::string;

int main() {
    // Now we can use the type alias 'integer' to declare integer variables
    integer a = 10;
    std::cout << a << std::endl; // This will print: 10

    // Similarly, we can use the type alias 'string' to declare string variables
    string s = "Hello, World!";
    std::cout << s << std::endl; // This will print: Hello, World!

    // Type alias can also be used with pointer types
    using intPtr = int*;
    integer b = 20;
    intPtr p = &b;
    std::cout << *p << std::endl; // This will print: 20

    // Type alias can also be used with function types
    using func = void (*)();
    func f = []() { std::cout << "Hello, Function!" << std::endl; };
    f(); // This will print: Hello, Function!

    // the old typedef way (note the different syntax ordering)
    typedef int Integer;
    typedef void (*MyFunc)();

    return 0;
}