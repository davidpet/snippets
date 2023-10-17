# Modules (2020)

Modules in C++20 represent a major shift in how source code can be organized and compiled. Let's dive in.

### C++20 Modules

Modules provide a new way of organizing and importing C++ code, addressing long-standing issues with the traditional preprocessor and header file inclusion mechanism. They are intended to:
- Improve compile times.
- Encapsulate implementation details.
- Remove issues related to macros leaking out of headers.
  
#### Key Concepts:

1. **Module Interface Unit**: The part of a module that declares what will be made available to consumers. It's typically saved with a `.cppm` or `.ixx` extension.
2. **Module Implementation Unit**: This provides the definitions of what was declared in the module interface. It is typically a `.cpp` file.
3. **Import Declaration**: Used to consume the declarations of a module.

#### Example:

Let's look at a simple example of how to define and use a module.

1. **MathModule.ixx** (Module Interface Unit)
    ```cpp
    export module math;

    export int add(int a, int b) {
        return a + b;
    }
    ```

2. **Main.cpp** (Consumer)
    ```cpp
    import math;

    int main() {
        int result = add(3, 4);
        // Use the result...
    }
    ```

#### Compilation:

Modules require a two-step compilation process:
1. Compile the module interface.
2. Compile the consuming code.

Using a hypothetical compiler, it might look like:
```sh
$ compiler --compile-module MathModule.ixx -o MathModule.o
$ compiler Main.cpp MathModule.o -o main_program
```

### Points to Remember:

- **Isolation**: One of the key features of modules is their ability to isolate code. Macros defined in a module (or before an `import` declaration) won't leak into consuming code.
- **Compatibility**: You can use modules with traditional headers and source files in the same project.
- **Tooling**: As of now, not all build systems and compilers have robust support for C++20 modules. Check your compiler's documentation for specific module-related flags and build instructions.

### Conclusion:

C++20's modules feature offers a modern approach to code organization and compilation. It addresses several long-standing issues of the C++ compilation model and provides better encapsulation, improved compile times, and fewer side effects compared to the traditional preprocessor-based model. However, the adoption curve might be gradual as the community and tooling adapt to this new feature.
