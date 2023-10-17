#include <iostream>
#include <bitset>

int main() {
    // Create a bitset of size 8 from a binary string
    std::bitset<8> b1("11010010");

    // Create a bitset of size 8 initialized to zero
    std::bitset<8> b2;

    // Set some bits
    b2.set(4);  // Sets the 4th bit (0-based)
    b2.set(6);  // Sets the 6th bit

    // Bitwise AND operation
    std::bitset<8> result = b1 & b2;

    std::cout << "b1: " << b1 << std::endl;      // Outputs: 11010010
    std::cout << "b2: " << b2 << std::endl;      // Outputs: 01010000
    std::cout << "AND result: " << result << std::endl; // Outputs: 01010000

    // Check if a particular bit is set
    if(b1.test(3)) {
        std::cout << "3rd bit of b1 is set!" << std::endl;
    }

    return 0;
}
