# Boolean Operators on Non-Boolean Values

In the code, we have demonstrated the use of boolean operators on non-boolean values in C++. We have used both logical and bitwise operators. Logical operators consider any non-zero value as true and zero as false. Bitwise operators perform operations on the binary representations of the numbers. The bitwise NOT operator is a unary operator that flips the bits of its operand.

For non-numeric values, it depends on the `bool()` conversion operator, which is not implemented for very many built-in types, but can be implementd for your class. Note that c-strings will always be true unless `nullptr.`  Logical operators return `bool`.