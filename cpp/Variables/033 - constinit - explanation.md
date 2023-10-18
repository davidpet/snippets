# constinit

`constinit` is a keyword introduced in C++20 to ensure that a variable is initialized at compile-time. This is a guarantee that initialization occurs during the static initialization phase, ensuring that there's no dynamic initialization overhead at runtime. However, unlike `constexpr`, `constinit` does not imply that the variable is `const`.

Let's break this down:

## `constinit`

### Key Points:

1. **Compile-time Initialization**: Guarantees that the initialization of the variable is done at compile time.
   
2. **Not Necessarily `const`**: A `constinit` variable isn't implicitly `const`. That means its value can change after initialization, but the initialization itself must happen at compile time.
   
3. **Static Initialization Phase**: Ensures initialization happens during the static initialization phase, avoiding any dynamic initialization overhead.

4. **Limited Usage Scenarios**: It's primarily used for scenarios where it's crucial to ensure that a variable is initialized at compile time, but you might want to modify it at runtime. 

### Example:

```cpp
constinit int global_var = compute_at_compile_time();  // Must be initialized at compile time

int main() {
    global_var = 10;  // Allowed, because global_var is not const
    return global_var;
}
```

In the above example, `compute_at_compile_time()` must be a `constexpr` function or another compile-time evaluatable expression to ensure that `global_var` is initialized at compile-time. After initialization, you can modify `global_var` since it's not declared as `const`.

### Summary:

- `constinit` ensures a variable is initialized at compile time.
- It does not make the variable `const`.
- It's useful for scenarios where compile-time initialization is desired without restricting post-initialization modifications.
