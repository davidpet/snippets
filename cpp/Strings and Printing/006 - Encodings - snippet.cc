#include <iostream>
#include <string>
#include <locale>
#include <codecvt>

int main() {
    // Declare a string with UTF-8 encoding
    std::string utf8_string = u8"Hello, World!";

    // Print the UTF-8 encoded string
    std::cout << utf8_string << std::endl; // Expected output: Hello, World!

    // Declare a string with UTF-16 encoding
    std::u16string utf16_string = u"Hello, World!";

    // Convert the UTF-16 string to UTF-8 for printing
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> convert;
    std::string utf8_from_utf16 = convert.to_bytes(utf16_string);

    // Print the converted UTF-16 string
    std::cout << utf8_from_utf16 << std::endl; // Expected output: Hello, World!

    // Declare a string with UTF-32 encoding
    std::u32string utf32_string = U"Hello, World!";

    // Convert the UTF-32 string to UTF-8 for printing
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> convert32;
    std::string utf8_from_utf32 = convert32.to_bytes(utf32_string);

    // Print the converted UTF-32 string
    std::cout << utf8_from_utf32 << std::endl; // Expected output: Hello, World!

    return 0;
}
