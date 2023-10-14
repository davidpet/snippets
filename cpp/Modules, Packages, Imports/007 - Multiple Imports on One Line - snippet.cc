C++ does not support multiple imports on one line in the same way that languages like Python do. In C++, you include libraries using the `#include` directive, and each library must be included on its own line. However, you can include multiple libraries in your program.

Here is an example:

// Include the iostream library for input/output operations
#include <iostream>
// Include the string library for string operations
#include <string>
// Include the vector library for vector operations
#include <vector>

int main() {
    // Use the std namespace for convenience
    using namespace std;

    // Create a string
    string myString = "Hello, World!";
    // Print the string
    cout << myString << endl; // Expected output: Hello, World!

    // Create a vector of integers
    vector<int> myVector = {1, 2, 3, 4, 5};
    // Print the vector
    for (int i : myVector) {
        cout << i << " "; // Expected output: 1 2 3 4 5 
    }
    cout << endl;

    return 0;
}