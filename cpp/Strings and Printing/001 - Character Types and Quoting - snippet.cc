#include <iostream>

int main() {
    // In C++, there are several character types: char, wchar_t, char16_t, char32_t
    // char is used to store a single character
    char c = 'A';
    std::cout << c << std::endl; // Prints: A

    // wchar_t is used to store a wide character
    wchar_t wc = L'A';
    std::wcout << wc << std::endl; // Prints: A

    // char16_t and char32_t are used to store Unicode characters
    char16_t c16 = u'A';
    char32_t c32 = U'A';
    std::cout << c16 << std::endl; // Prints: 65
    std::cout << c32 << std::endl; // Prints: 65

    // Quoting in C++ can be done with single quotes for characters and double quotes for strings
    char singleQuote = '\'';
    std::cout << singleQuote << std::endl; // Prints: '

    char doubleQuote = '\"';
    std::cout << doubleQuote << std::endl; // Prints: "

    // Strings in C++ are arrays of characters
    char str[] = "Hello, World!";
    std::cout << str << std::endl; // Prints: Hello, World!

    // Strings can also be declared using the string class
    std::string strClass = "Hello, World!";
    std::cout << strClass << std::endl; // Prints: Hello, World!

    return 0;
}