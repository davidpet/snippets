# Switch Statements on Non-Integer Types (string, enum, custom)
In the above code:

1. We use a `std::map` to map string values to integer values, and then use a switch statement on the integer values. This allows us to effectively use a switch statement with string types.

2. We use an `enum` type directly in a switch statement. This is supported directly by C++.

3. We use a `std::variant` to hold custom types, and then use `std::visit` to perform a type-based switch. This allows us to effectively use a switch statement with custom types.