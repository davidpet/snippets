#include <iostream>
#include <string>
#include <sstream>

int main() {
    // Converting from string to numeric types
    std::string str1 = "123";
    int num1 = std::stoi(str1); // stoi converts string to int
    std::cout << num1 << std::endl; // prints: 123

    std::string str2 = "123.456";
    double num2 = std::stod(str2); // stod converts string to double
    std::cout << num2 << std::endl; // prints: 123.456

    // Converting from numeric types to string
    int num3 = 789;
    std::string str3 = std::to_string(num3); // to_string converts int to string
    std::cout << str3 << std::endl; // prints: 789

    double num4 = 789.012;
    std::string str4 = std::to_string(num4); // to_string converts double to string
    std::cout << str4 << std::endl; // prints: 789.012000

    // Using stringstream for conversions
    std::stringstream ss;
    ss << num3; // inserting int into stringstream
    std::string str5;
    ss >> str5; // extracting string from stringstream
    std::cout << str5 << std::endl; // prints: 789

    ss.clear(); // clearing stringstream
    ss << num4; // inserting double into stringstream
    std::string str6;
    ss >> str6; // extracting string from stringstream
    std::cout << str6 << std::endl; // prints: 789.012

    return 0;
}