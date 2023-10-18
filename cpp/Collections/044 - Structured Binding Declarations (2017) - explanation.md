## Structured Bindings in C++17

Structured bindings allow for deconstructing an aggregate data type (like a tuple or a struct) into its individual elements, binding each element to its own name. They provide a concise and readable way to work with such data types.

### Syntax

The general syntax for structured bindings is:

```cpp
[auto|type] [binding_names...] = expression;
```

### Basic Example

Consider you have a `tuple` and you want to extract its values:

```cpp
std::tuple<int, double, std::string> get_data() {
    return {42, 3.14, "hello"};
}

auto [i, d, s] = get_data();
std::cout << i << ", " << d << ", " << s << std::endl;  // Outputs: 42, 3.14, hello
```

### How Does It Work?

1. **Decomposition Requirement**: The expression on the right-hand side of the `=` must be of a type that defines `tuple_size` and either `get` or provides non-static data members (either direct or inherited). This ensures the compiler knows how many elements are in the type and how to access them.

2. **Access**: For classes and structs, the bindings directly correspond to the non-static data members of the object, in declaration order. For other types like `std::tuple`, the bindings are based on the `get` function template.

3. **Underlying Storage**: The expression on the right-hand side of the `=` is kept alive for the scope of the structured binding, and the bindings are actually references or aliases to the elements within it. This means there's no deep copying of data, and modifications to the bindings reflect on the original data (if the data type permits modification).

### Extended Examples

#### 1. Working with `std::pair`

```cpp
std::pair<int, std::string> p = {5, "five"};
auto [num, word] = p;
std::cout << num << ": " << word << std::endl;  // Outputs: 5: five
```

#### 2. Working with structs

```cpp
struct Point {
    int x, y;
};

Point pt = {1, 2};
auto [xx, yy] = pt;
std::cout << xx << ", " << yy << std::endl;  // Outputs: 1, 2
```

#### 3. Working with arrays

```cpp
int arr[] = {1, 2, 3};
auto [a, b, c] = arr;
std::cout << a << b << c << std::endl;  // Outputs: 123
```

### Limitations and Caveats

1. The number of names in the structured binding declaration must match the number of elements in the aggregate type.
2. You can't bind to specific members by name; they're always bound in order.
3. As the structured bindings are essentially references, one must be cautious about the lifetime of the original data.

Note: when a temporary object is used on the right, structured bindings will usually get __rvalue references__.

---

Structured bindings are a powerful addition to C++17, offering a clear and concise way to work with aggregate types. They simplify code that previously would have required verbose use of `std::get` or manual member access.
