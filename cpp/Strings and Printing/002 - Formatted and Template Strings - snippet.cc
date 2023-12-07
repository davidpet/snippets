#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
// #include <cstdio> // for sprintf (included by something above somehow)

int main() {
    // Basic string declaration
    std::string basic_string = "Hello, World!";
    std::cout << basic_string << std::endl; // Prints: Hello, World!

    // Formatted string with sprintf (old C style)
    char formatted_string[50];
    sprintf(formatted_string, "Integer: %d, Float: %.2f", 10, 3.14159);
    std::cout << formatted_string << std::endl; // Prints: Integer: 10, Float: 3.14

    // Formatted string with snprintf (safer C style)
    char safe_formatted_string[50];
    snprintf(safe_formatted_string, sizeof(safe_formatted_string), "Integer: %d, Float: %.2f", 20, 2.71828);
    std::cout << safe_formatted_string << std::endl; // Prints: Integer: 20, Float: 2.72

    // Formatted string with stringstream (C++ style)
    std::stringstream ss;
    ss << "Integer: " << 30 << ", Float: " << std::fixed << std::setprecision(2) << 1.41421;
    std::cout << ss.str() << std::endl; // Prints: Integer: 30, Float: 1.41

    // Template string with replace (C++ style)
    std::string template_string = "Hello, {name}!";
    std::string::size_type pos = template_string.find("{name}");
    if (pos != std::string::npos) {
        template_string.replace(pos, 6, "Alice");
    }
    std::cout << template_string << std::endl; // Prints: Hello, Alice!

    return 0;
}
