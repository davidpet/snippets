#include <iostream>
#include <string>

int main() {
    // Declare a string with a newline character at the end
    std::string str1 = "Hello, World!\n";
    std::cout << str1; // Prints: Hello, World! and moves to a new line

    // Declare a string with a carriage return character at the end
    std::string str2 = "Hello, World!\r";
    std::cout << str2; // Prints: Hello, World! and moves the cursor to the beginning of the line

    // Declare a string with a newline and carriage return character at the end
    std::string str3 = "Hello, World!\r\n";
    std::cout << str3; // Prints: Hello, World! and moves to a new line (Windows style)

    // Declare a string with a form feed character at the end
    std::string str4 = "Hello, World!\f";
    std::cout << str4; // Prints: Hello, World! and moves to a new page

    // Declare a string with a vertical tab character at the end
    std::string str5 = "Hello, World!\v";
    std::cout << str5; // Prints: Hello, World! and moves the cursor down to the next tab stop

    // Declare a string with a backspace character at the end
    std::string str6 = "Hello, World!\b";
    std::cout << str6; // Prints: Hello, World! and moves the cursor back one space

    // Declare a string with a null character at the end
    std::string str7 = "Hello, World!\0";
    std::cout << str7; // Prints: Hello, World! and terminates the string

    return 0;
}