#include <iostream>

int main() {
    // Declare a character
    char c = 'A';

    // Print the character
    std::cout << "Character: " << c << std::endl; // Expected output: Character: A

    // Convert the character to its ASCII value (integer)
    int ascii_value = static_cast<int>(c);

    // Print the ASCII value
    std::cout << "ASCII value: " << ascii_value << std::endl; // Expected output: ASCII value: 65

    // Convert the ASCII value back to a character
    char converted_char = static_cast<char>(ascii_value);

    // Print the converted character
    std::cout << "Converted character: " << converted_char << std::endl; // Expected output: Converted character: A

    // Declare an integer
    int num = 66;

    // Convert the integer to a character
    char num_to_char = static_cast<char>(num);

    // Print the converted character
    std::cout << "Converted character from number: " << num_to_char << std::endl; // Expected output: Converted character from number: B

    return 0;
}