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
