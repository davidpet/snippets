Sure, here is a comprehensive example of File I/O operations in C++ using the standard library.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Create an ofstream object and open a file
    std::ofstream outFile("example.txt");
    // Check if the file is open
    if (!outFile.is_open()) {
        std::cout << "Failed to open the file." << std::endl; // This should not print if the file opens successfully
        return 1;
    }

    // Write to the file
    outFile << "Hello, World!" << std::endl;
    outFile.close(); // Always remember to close the file

    // Create an ifstream object and open the same file
    std::ifstream inFile("example.txt");
    // Check if the file is open
    if (!inFile.is_open()) {
        std::cout << "Failed to open the file." << std::endl; // This should not print if the file opens successfully
        return 1;
    }

    // Read from the file
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl; // This should print "Hello, World!"
    }
    inFile.close(); // Always remember to close the file

    return 0;
}