#include <iostream>
#include <string>

int main() {
    // Declare two strings
    std::string str1 = "Hello, ";
    std::string str2 = "World!";

    // Concatenate strings using the '+' operator
    std::string str3 = str1 + str2;
    std::cout << str3 << std::endl; // Expected output: "Hello, World!"

    // Concatenate strings using the '+=' operator
    str1 += str2;
    std::cout << str1 << std::endl; // Expected output: "Hello, World!"

    // Concatenate strings using the 'append' function
    std::string str4 = "Hello, ";
    std::string str5 = "World!";
    str4.append(str5);
    std::cout << str4 << std::endl; // Expected output: "Hello, World!"

    // Concatenate a string with a character array
    std::string str6 = "Hello, ";
    char charArray[] = "World!";
    str6 += charArray;
    std::cout << str6 << std::endl; // Expected output: "Hello, World!"

    // Concatenate a string with a single character
    std::string str7 = "Hello, World";
    char ch = '!';
    str7 += ch;
    std::cout << str7 << std::endl; // Expected output: "Hello, World!"

    return 0;
}