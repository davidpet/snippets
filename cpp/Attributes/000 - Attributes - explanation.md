# Attributes

## C++ Attributes

Attributes in C++ are tokens placed within `[[ ]]` that provide additional information to the compiler. They were introduced in C++11 and expanded in subsequent versions, including C++17.

### **1. Placement of Attributes:**

Attributes can be applied to various entities:

- Classes, structs, and unions
- Functions and lambdas
- Variables and members
- Enumerations
- Blocks of code (loops, `if` statements)
- Namespaces
- ... and others

### **2. Built-in Attributes in C++17:**

#### **a. `[[nodiscard]]`**:
Indicates the return value of a function should not be ignored.

```cpp
[[nodiscard]] int compute();
int main() {
    compute(); // Compiler warning: Ignoring 'nodiscard' value
}
```

#### **b. `[[deprecated]]` or `[[deprecated("reason")]]`**:
Marks an entity as deprecated, and optionally provides a reason.

```cpp
[[deprecated("Use newFunction instead")]]
void oldFunction();

int main() {
    oldFunction(); // Compiler warning: 'oldFunction' is deprecated: Use newFunction instead
}
```

#### **c. `[[maybe_unused]]`**:
Suppresses compiler warnings about unused entities.

```cpp
void function() {
    [[maybe_unused]] int value = compute();
    // Some code where 'value' might not be used
}
```

### **3. Importing and Using Attributes:**

In C++17, standard attributes are part of the core language and don't need to be imported. However, later standards like C++20 introduce attributes in the `std` namespace, which might require `#include` directives for certain attributes.

### **4. Defining Custom Attributes:**

As of C++17, you can't define custom attributes in the same way you might define custom annotations in languages like Java. The attributes available are those provided by the language and any extensions offered by specific compilers.

### **5. How Are They Used by the Compiler and/or Client Code?**

Attributes provide information to the compiler, which it uses to generate warnings, errors, or modify its behavior in certain ways. For instance, `[[nodiscard]]` makes the compiler emit a warning if a function's return value is ignored. `[[deprecated]]` generates warnings when deprecated entities are used. 

Client code (i.e., the code using these attributes) doesn't typically "use" them in the same sense that it would use a function or variable. Instead, client code should heed the advice or requirements that attributes convey.
