# All Ways to Quote Strings
In C++, strings can be quoted in several ways. 

1. Double quotes are used for string literals. A string literal is a sequence of characters surrounded by double quotes. 

2. Single quotes are used for character literals. A character literal is a single character surrounded by single quotes.

3. Escape sequences can be used in string literals to represent certain special characters. For example, `\"` represents a double quote, and `\n` represents a newline.

4. Raw string literals ignore escape sequences. They are written as `R"( ... )"`, where `...` is the string content. This is useful when you want to include actual backslashes or double quotes in your string.

5. Multiline string literals can be created by using a newline (`\n`) escape sequence.

6. Multiline raw string literals can be created by including actual newlines in the `R"( ... )"` syntax. This is useful when you want to preserve the exact format of a multiline string.