#include <iostream>

// The main function in C++ can take two arguments: 
// the number of command line arguments and an array of command line arguments.
int main(int argc, char* argv[]) {
    // argc is the count of the arguments supplied to the program
    // It is always at least 1 because the name of the program itself is considered an argument
    std::cout << "Number of arguments: " << argc << std::endl; // This will print the number of arguments

    // argv is an array of character pointers. 
    // The first element (argv[0]) is the name of the program. 
    // The last element is a null pointer (argv[argc] = NULL)
    for(int i = 0; i < argc; i++) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl; // This will print each argument
    }

    return 0;
}