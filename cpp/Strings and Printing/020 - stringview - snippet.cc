#include <iostream>
#include <string_view>

void printPrefix(std::string_view text, size_t prefixLength) {
    if (prefixLength <= text.size()) {
        std::string_view prefix = text.substr(0, prefixLength);
        std::cout << "Prefix: " << prefix << "\n";
    } else {
        std::cout << "Requested prefix length is greater than text length.\n";
    }
}

int main() {
    std::string_view sv = "Hello, World!";
    std::cout << sv << "\n";

    // substring without creating a new string
    printPrefix(sv, 5);

    char arr[] = "Array-based string.";
    std::string_view arr_sv(arr);
    std::cout << arr_sv << "\n";

    return 0;
}
