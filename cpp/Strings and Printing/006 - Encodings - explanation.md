# Encodings
In this code snippet, we demonstrate the usage of different string encodings in C++. 

We start by declaring a string with UTF-8 encoding and print it. UTF-8 is a variable-width character encoding that can represent every character in the Unicode standard, yet the initial encoding of byte codes and character set is ASCII. 

Next, we declare a string with UTF-16 encoding. UTF-16 is a character encoding for Unicode that extends UTF-8 to include additional characters. However, the standard output stream in C++ does not support UTF-16 directly, so we need to convert it to UTF-8 before printing. We use `std::wstring_convert` and `std::codecvt_utf8_utf16` for this conversion.

Finally, we declare a string with UTF-32 encoding. UTF-32 is a protocol to encode Unicode code points that uses exactly 32 bits per Unicode code point. Like UTF-16, UTF-32 is not directly supported by the standard output stream in C++, so we convert it to UTF-8 before printing. We use `std::wstring_convert` and `std::codecvt_utf8` for this conversion.

Please note that `std::wstring_convert` and `std::codecvt_utf8_utf16` are deprecated in C++17 and removed in C++20. For C++20 and later, consider using third-party libraries like ICU or Boost.Locale for conversion between different encodings.