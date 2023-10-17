## `std::optional` in C++

### Overview

Introduced in C++17, `std::optional` provides a way to represent optional values, i.e., values that might or might not be present. A common use case is when a function might fail to produce a value, and you want to avoid exceptions or special return values.

### Key Features:
- Represents an optional value which might be absent.
- Safer than using pointers or special values to represent absence.
- Provides methods to check and access the value.

### Notes:
- You can use `.has_value()` or the `bool` conversion to check if an optional contains a value.
- `.value()` or `operator*` can be used to access the stored value. If no value is stored, calling `.value()` will throw `std::bad_optional_access`.
- `std::nullopt` is a special value that represents an empty optional.

The snippet illustrates a simple use case of `std::optional` where a division operation might fail when the denominator is zero. Instead of returning an error code or throwing an exception, we return an empty optional to signify the failure.
