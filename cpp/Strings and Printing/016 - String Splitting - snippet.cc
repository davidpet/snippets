#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>

int main() {
    // Declare a string
    std::string str = "C++ is a general-purpose programming language";
    
    // Use a string stream to split the string
    std::istringstream iss(str);
    
    // Declare a vector to hold the split strings
    std::vector<std::string> results((std::istream_iterator<std::string>(iss)),
                                     std::istream_iterator<std::string>());
    
    // Print the split strings
    for (const auto& word : results) {
        std::cout << word << std::endl; // This will print each word in the string on a new line
    }
    
    // Another way to split a string is by using the getline function
    std::string str2 = "C++,Java,Python,Ruby";
    std::vector<std::string> results2;
    std::string token;
    std::istringstream tokenStream(str2);
    
    while (std::getline(tokenStream, token, ',')) {
        results2.push_back(token);
    }
    
    // Print the split strings
    for (const auto& word : results2) {
        std::cout << word << std::endl; // This will print each programming language on a new line
    }
    
    return 0;
}