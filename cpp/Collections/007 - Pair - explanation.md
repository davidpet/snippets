### `std::pair` Demonstration

`std::pair` is a utility provided by the C++ Standard Library that can hold two objects of possibly different types. It's useful when you need to group two items together.

#### **Header**
```cpp
#include <iostream>
#include <utility> // for std::pair
```

#### **Using `std::pair`**

```cpp
int main() {
    // Creating a pair
    std::pair<int, std::string> p1 = {42, "Answer"};

    // Accessing the elements
    std::cout << "First: " << p1.first << ", Second: " << p1.second << std::endl; // Output: First: 42, Second: Answer

    // Using the `make_pair` function
    auto p2 = std::make_pair(3.14, 'A');
    std::cout << "First: " << p2.first << ", Second: " << p2.second << std::endl; // Output: First: 3.14, Second: A

    // Swapping two pairs
    std::pair<char, double> p3 = {'B', 2.71};
    p2.swap(p3);
    std::cout << "p2 after swap - First: " << p2.first << ", Second: " << p2.second << std::endl; // Output: p2 after swap - First: B, Second: 2.71
    std::cout << "p3 after swap - First: " << p3.first << ", Second: " << p3.second << std::endl; // Output: p3 after swap - First: 3.14, Second: A

    return 0;
}
```
