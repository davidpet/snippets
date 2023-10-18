## Extern Templates in C++

### Introduction:

`extern template` is a somewhat niche, but occasionally useful feature that was introduced in C++11 to help improve compile times for certain codebases.

In C++, when we include a header with a template class or function, the compiler typically instantiates that template wherever it's used in the source files. This can lead to multiple instantiation of the same template in different translation units, which can then be a drag on compile times.

To mitigate this, C++11 introduced the `extern template` declaration. It tells the compiler not to instantiate a specific template instantiation in this translation unit. Instead, the instantiation is done explicitly in another source file.

### How to Use:

1. In the header file, after the template declaration/definition, use `extern template` to declare an external instantiation.
2. In one (and only one) source file, instantiate the template. This will be the only place where the compiler actually generates the code for that instantiation.

### Advantages:

- **Reduced Compile Time:** For large projects with heavy template use, it can help reduce compile times by avoiding redundant instantiations.
  
---

### Code Snippet:

**MyClass.h**
```cpp
template<typename T>
class MyClass {
public:
    void doSomething();
};

// Declare an external instantiation for MyClass<int>
extern template class MyClass<int>;
```

**MyClass.cpp**
```cpp
#include "MyClass.h"

// Define the template member function
template<typename T>
void MyClass<T>::doSomething() {
    // Some implementation
}

// Explicitly instantiate MyClass<int>
template class MyClass<int>;
```

**Main.cpp**
```cpp
#include "MyClass.h"

int main() {
    MyClass<int> obj;
    obj.doSomething();
    return 0;
}
```

In the above example, `MyClass<int>` is instantiated only in `MyClass.cpp`. The `Main.cpp` will use the instantiation from there and will not re-instantiate the template.

---

### Points to Remember:

- **One Explicit Instantiation:** Ensure that there's only one explicit instantiation in one of the source files. Otherwise, you'll get a linker error.
  
- **Selective Reduction:** Use `extern template` judiciously. It's beneficial for frequently used templates across multiple translation units. Overusing can complicate the build process without significant gains.

---

Extern templates can be a handy tool for large-scale C++ projects that make heavy use of templates. By selectively reducing redundant instantiations, they help in improving compilation times.
