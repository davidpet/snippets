#include <iostream>
#include <string>

int main() {
    // 1. Double quotes for string literals
    std::string str1 = "Hello, World!";
    std::cout << str1 << std::endl; // Prints: Hello, World!

    // 2. Single quotes for character literals
    char ch = 'A';
    std::cout << ch << std::endl; // Prints: A

    // 3. Escape sequences in string literals
    std::string str2 = "Hello, \"World\"!";
    std::cout << str2 << std::endl; // Prints: Hello, "World"!

    // 4. Raw string literals (ignores escape sequences)
    std::string str3 = R"(Hello, "World"!)";
    std::cout << str3 << std::endl; // Prints: Hello, "World"!

    // 5. Multiline string literals
    std::string str4 = "Hello, \nWorld!";
    std::cout << str4 << std::endl; // Prints: Hello, 
                                    //         World!

    // 6. Multiline raw string literals
    std::string str5 = R"(Hello, 
World!)";
    std::cout << str5 << std::endl; // Prints: Hello, 
                                    //         World!
    return 0;
}