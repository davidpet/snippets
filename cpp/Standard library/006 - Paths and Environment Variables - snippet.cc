Sure, here is a code snippet demonstrating the usage of paths and environment variables in C++ using the standard library.

#include <iostream>
#include <cstdlib> // for getenv
#include <filesystem> // for path manipulation

int main() {
    // Get the PATH environment variable
    const char* path = std::getenv("PATH");
    if(path) {
        std::cout << "PATH: " << path << std::endl; // prints the PATH environment variable
    } else {
        std::cout << "PATH environment variable not found." << std::endl; // prints if PATH is not found
    }

    // Get the HOME environment variable
    const char* home = std::getenv("HOME");
    if(home) {
        std::cout << "HOME: " << home << std::endl; // prints the HOME environment variable
    } else {
        std::cout << "HOME environment variable not found." << std::endl; // prints if HOME is not found
    }

    // Working with filesystem paths
    std::filesystem::path p("/usr/bin");

    // Print the path
    std::cout << "Path: " << p << std::endl; // prints "/usr/bin"

    // Print the root name
    std::cout << "Root name: " << p.root_name() << std::endl; // prints ""

    // Print the root directory
    std::cout << "Root directory: " << p.root_directory() << std::endl; // prints "/"

    // Print the relative path
    std::cout << "Relative path: " << p.relative_path() << std::endl; // prints "usr/bin"

    // Print the parent path
    std::cout << "Parent path: " << p.parent_path() << std::endl; // prints "/usr"

    // Print the filename
    std::cout << "Filename: " << p.filename() << std::endl; // prints "bin"

    return 0;
}