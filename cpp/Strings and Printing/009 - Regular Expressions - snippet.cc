#include <iostream>
#include <regex>
#include <string>

int main() {
    // Define a string that we will search for a pattern
    std::string s("Hello World! 123");

    // Define a regular expression pattern
    std::regex pattern("\\d+"); // This pattern matches one or more digits

    // Use std::regex_search to check if the pattern exists in the string
    bool match = std::regex_search(s, pattern);
    std::cout << std::boolalpha << match << std::endl; // Prints: true

    // Use std::regex_match to check if the entire string matches the pattern
    match = std::regex_match(s, pattern);
    std::cout << std::boolalpha << match << std::endl; // Prints: false

    // Use std::regex_replace to replace the matched pattern in the string
    std::string replaced = std::regex_replace(s, pattern, "456");
    std::cout << replaced << std::endl; // Prints: Hello World! 456

    // Use std::smatch to find and iterate over all matches
    std::smatch matches;
    std::regex_search(s, matches, pattern);
    for(auto match : matches) {
        std::cout << match << " "; // Prints: 123
    }
    std::cout << std::endl;

    // Demonstrating capture groups
    std::string input2 = "Date: 2023-10-15";
    std::regex pattern2(R"(Date: (\d{4})-(\d{2})-(\d{2}))");  // The raw string (R"") syntax makes it easier to write regex patterns in C++
    std::smatch matches2;

    if (std::regex_search(input2, matches2, pattern2)) {
        std::cout << "Year: " << matches2[1].str() << std::endl; // prints separate year, month, day
        std::cout << "Month: " << matches2[2].str() << std::endl;
        std::cout << "Day: " << matches2[3].str() << std::endl;
    } else {
        std::cout << "No match found!" << std::endl;
    }

    return 0;
}
