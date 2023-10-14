#include <iostream>

int main() {
    // Demonstrating the 'break' statement
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            break;  // This will exit the loop when i equals 5
        }
        std::cout << i << std::endl;  // This will print numbers from 0 to 4
    }

    // Demonstrating the 'continue' statement
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            continue;  // This will skip the rest of the loop when i equals 5
        }
        std::cout << i << std::endl;  // This will print numbers from 0 to 4 and 6 to 9
    }

    // Demonstrating 'break' in a while loop
    int j = 0;
    while (true) {
        if (j == 5) {
            break;  // This will exit the loop when j equals 5
        }
        std::cout << j << std::endl;  // This will print numbers from 0 to 4
        ++j;
    }

    // Demonstrating 'continue' in a while loop
    j = 0;
    while (j < 10) {
        if (j == 5) {
            ++j;
            continue;  // This will skip the rest of the loop when j equals 5
        }
        std::cout << j << std::endl;  // This will print numbers from 0 to 4 and 6 to 9
        ++j;
    }

    return 0;
}