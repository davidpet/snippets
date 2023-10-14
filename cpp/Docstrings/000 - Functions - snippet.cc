In C++, there is no built-in support for docstrings like in Python. However, we can use multi-line comments or single-line comments to document our code. Here is an example of how you might document a function in C++.

/**
 * This function adds two integers.
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 7);
    std::cout << result << std::endl; // Expected output: 12
    return 0;
}