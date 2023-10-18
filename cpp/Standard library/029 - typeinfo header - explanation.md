## `<typeinfo>` in C++

The `<typeinfo>` header provides facilities to explore information about data types at runtime, primarily through two classes: `typeid` operator and `type_info`.

### Key Components:

1. **typeid Operator:** 
   - Used to obtain a reference to a `type_info` object.
   - Can be applied to expressions or type names.
   - For polymorphic types (i.e., classes with virtual functions), `typeid` gives the type of the pointed-to object. Otherwise, it gives the static type.

2. **type_info class:** 
   - Represents type information. Objects of this class effectively store a type description.
   - Non-copyable and non-movable.
   - Provides member functions for comparing types and fetching type names.

### Key `type_info` Member Functions:

- `name()`: Returns a null-terminated character sequence that may identify the type.
- `operator==()`, `operator!=()`: Compares if two `type_info` objects represent the same type.
- `before()`: Determines the collation order of the type names.
- `hash_code()`: Returns a hash code of the type information.

---

### Code Snippet:

```cpp
#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual ~Base() = default;
};

class Derived : public Base {};

int main() {
    Derived d;
    Base& b = d;

    // Using typeid with expressions
    std::cout << "Type of b (with reference): " << typeid(b).name() << std::endl;
    std::cout << "Type of d: " << typeid(d).name() << std::endl;
    
    int i = 5;
    double db = 5.5;

    // Comparing types using type_info
    if(typeid(i) == typeid(int)) {
        std::cout << "i is of type int\n";
    }

    if(typeid(db) != typeid(int)) {
        std::cout << "db is not of type int\n";
    }

    // Hash code of type
    std::cout << "Hash code of type of i: " << typeid(i).hash_code() << std::endl;
}

```

---

### Points to Remember:

- For `typeid` to determine the actual type of an object for polymorphic classes, the class must have at least one virtual function.
  
- The exact content of the string returned by `type_info::name()` is implementation-defined; it might return mangled names.

- If you apply `typeid` to a dereferenced null pointer, it throws a `std::bad_typeid` exception.

---

The `<typeinfo>` header provides a mechanism for inspecting type information at runtime, useful in scenarios like generic programming or serialization where type details matter at execution time.
