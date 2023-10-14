C++ does not have a built-in concept of modules or packages like Python or Java. However, it does have a system for including other files, which is somewhat similar. The `#include` directive is used to include the contents of another file in the current file. This is often used to include header files, which contain function declarations and other information that needs to be shared between multiple source files.

The search path for `#include` directives is determined by the compiler. By default, the compiler will look in the same directory as the current file, and in any directories specified with the `-I` command line option. The `<>` brackets are used to include files from the system directories, while the `""` quotes are used to include files from the current directory and `-I` directories.

Here is an example of how to use the `#include` directive:

// Include the iostream header file from the system directories
#include <iostream>

// Include the my_header.h file from the current directory or -I directories
#include "my_header.h"

int main() {
    // Use the std::cout object from the iostream header file
    std::cout << "Hello, world!" << std::endl; // This will print "Hello, world!"

    // Call the my_function function from the my_header.h file
    my_function(); // This will do whatever my_function is defined to do

    return 0;
}