## `std::clamp`

Introduced in C++17, `std::clamp` is a utility function that restricts a value to stay within a specified range. If the value is less than the lower bound, it will return the lower bound. If it's more than the upper bound, it will return the upper bound. If it's within the bounds, it will return the value itself.

### Syntax:
```cpp
std::clamp(value, lower_bound, upper_bound);
```

### Notes:
- `std::clamp` does not modify the original value; it returns the clamped result.
- Make sure the lower bound is less than or equal to the upper bound, or behavior is undefined.
  