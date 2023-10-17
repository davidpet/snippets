#include <iostream>

// Here we define a struct with bitfields
struct BitField {
    // Bitfield with 1 bit. Can hold values 0 or 1.
    unsigned int is_enabled : 1;
    // Bitfield with 4 bits. Can hold values from 0 to 15.
    unsigned int type : 4;
    // Bitfield with 27 bits. Can hold values from 0 to 134217727.
    unsigned int id : 27;
};

int main() {
    BitField bf;

    // Assigning values to bitfields
    bf.is_enabled = 1; // Assigning 1 to is_enabled
    bf.type = 10; // Assigning 10 to type
    bf.id = 134217727; // Assigning 134217727 to id

    // Printing bitfield values
    std::cout << "Is Enabled: " << bf.is_enabled << std::endl; // Expected output: 1
    std::cout << "Type: " << bf.type << std::endl; // Expected output: 10
    std::cout << "ID: " << bf.id << std::endl; // Expected output: 134217727

    // Assigning a value that exceeds the bitfield's capacity
    // This will result in undefined behavior (and compiler warning)
    // bf.type = 16; // This value requires 5 bits, but 'type' only has 4 bits
    // std::cout << "Type: " << bf.type << std::endl; // Output is undefined

    return 0;
}
