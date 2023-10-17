#include <iostream>
#include <string>

int main() {
    // Declare a string to hold our input
    std::string input;

    // Use getline to read a line of input from the user
    // getline will read input until it encounters a newline ('\n')
    std::getline(std::cin, input);

    // Print the input back to the user
    std::cout << "You entered: " << input << std::endl; // This will print whatever the user entered

    // Now let's demonstrate reading input in chunks
    char buffer[10];

    // Read up to 9 characters (leaving room for the null terminator)
    std::cin.read(buffer, 9);

    // Don't forget to null-terminate the string!
    buffer[9] = '\0';

    // Print the input back to the user
    std::cout << "You entered: " << buffer << std::endl; // This will print the first 9 characters the user entered

    return 0;
}
