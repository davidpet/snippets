## Calling Conventions in C++

### What is a Calling Convention?

A calling convention determines how function arguments are passed and return values are received. Common conventions include `cdecl`, `stdcall`, `fastcall`, and more. These dictate aspects like stack usage, stack cleanup responsibility, parameter order, etc.

### Specifying Calling Conventions

In many C++ compilers, you can specify the calling convention using specific keywords or compiler-specific pragmas. However, this is a non-standard feature and varies by compiler.

For example, in MSVC:
```cpp
void __cdecl MyFunction();
```
Using these in portable C++ code is discouraged due to the non-standard nature.

### Interoperation with C

To ensure correct linking with C functions from C++ (because C++ "mangles" function names to support overloading, while C doesn't), C++ provides the `extern "C"` linkage specification.

```cpp
extern "C" {
    void MyCFunction();
}
```

When including a C header in a C++ program, it ideally should have an `extern "C"` block:
```c
#ifdef __cplusplus
extern "C" {
#endif

// C function declarations

#ifdef __cplusplus
}
#endif
```

### Interoperation with Other C++ Code

Different versions of C++ or different compilers might have incompatible ABI (Application Binary Interface). Linking C++ code compiled with one compiler/version to code compiled with another might result in issues. It's crucial to ensure ABI compatibility.

### Interoperation with Other Languages

1. **COM (Component Object Model)**: For interfacing with Windows components. It's a standard for binary interfaces.

2. **FFI (Foreign Function Interface)**: Some languages support FFI, which allows calling functions from other languages. Typically, the C++ code provides a C API, since most languages interface easily with C.

3. **Python Interfacing**: Libraries like SWIG, Boost.Python, and pybind11 aid in interfacing C++ with Python.

4. **JNI (Java Native Interface)**: Used for interfacing C++ with Java.

It's common to provide a pure C API when interfacing with other languages because of C's stable ABI and the ease with which most languages can interface with C.
