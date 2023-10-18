# Mismatched Return Types

The ability to assign types based on implicit conversions or other things does not exist in C++ like in Java.  You have to match types exactly.

The one exception is `std::function<void(...)>` which will ignore return values for you if the lambda or method has one.  Function pointers don't allow this.
