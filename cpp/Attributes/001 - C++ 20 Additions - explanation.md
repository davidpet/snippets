# C++20 Attribute Enhancements

### **1. New Attributes Introduced:**

#### **a. `[[likely]]` and `[[unlikely]]`:**
Provide hints to the compiler about the expected branch taken in conditional statements, which can be useful for optimizations.

```cpp
if ([[unlikely]] error_condition) {
    handle_error();
} else {
    proceed_normally();
}
```

#### **b. `[[no_unique_address]]`:**
Indicates that a non-static data member does not require a unique address. It's mainly used with empty classes in order to potentially reduce the size of the containing class.

```cpp
struct Empty {};

struct X {
    [[no_unique_address]] Empty e;
    int i;
};
```

In the above example, the size of `X` might be the same as the size of `int` if `Empty` is an empty class.

#### **c. `[[nodiscard("reason")]]`:**
C++20 extended the `[[nodiscard]]` attribute to optionally accept a string literal to specify a reason for the nodiscard requirement.

```cpp
[[nodiscard("Failure to check the return can lead to errors.")]]
bool perform_task();
```

### **2. New Attribute Locations:**

C++20 also expanded where certain attributes can be placed:

- **Using Enumerations:** C++20 allows attributes to be placed on enumerators within an `enum`.

    ```cpp
    enum class Color {
        Red [[deprecated]], 
        Green, 
        Blue
    };
    ```

- **Using Namespaces:** It's now possible to apply certain attributes to namespaces.

    ```cpp
    namespace [[deprecated]] old_namespace {
        // ... old code ...
    }
    ```

### **3. Attribute for `import` and `export`:**

With the introduction of modules in C++20, attributes are used with `import` and `export`:

- **Module Partition:** The `[[module]]` attribute can be applied to a module partition, giving it a name.

### **4. Standard Attributes now in `std` Namespace:**

Starting with C++20, standard attributes are part of the `std` namespace. While using them without the namespace is still valid, they can now be referred with the `std::` prefix.
