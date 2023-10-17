# Variadic Templates

Variadic templates are a feature of C++ that allow you to define functions, classes, and structures that take a variable number of template arguments. This is achieved using the ... ellipsis notation.

The first example demonstates a variadic function tempalte, and the second demonstrates a variadic class template.

This MyTuple class is a simple and incomplete version of what's available as std::tuple in the C++ Standard Library.

Variadic templates offer a lot of flexibility, and these examples are just the tip of the iceberg. With more complex manipulations and utilities (like std::index_sequence and fold expressions in C++17), you can perform sophisticated operations on variadic template parameters.

Of course. Here you go:

---

## **Understanding Variadic Templates in C++**

### **Variadic Templates:**

Variadic templates allow you to define functions (or classes) that can accept a variable number of arguments of different types. The mechanism used to achieve this in C++ is the parameter pack. 

When you encounter `Args...`, it's a parameter pack. This signifies a sequence of zero or more template arguments of any type.

### **Breaking Down the `print` Function:**

```cpp
template <typename T, typename... Args>
void print(T head, Args... tail) {
    std::cout << head << " ";
    print(tail...);
}
```

For instance, if you invoke:

```cpp
print(1, 2.5, "hello", 'c');
```

#### **Sequence of Calls:**

1. **First Call**:
   * `head` = `1`
   * `tail` = `(2.5, "hello", 'c')`
   
   After outputting `1`, the function recursively calls itself with `tail` arguments.

2. **Second Call**:
   * `head` = `2.5`
   * `tail` = `("hello", 'c')`
   
   Post outputting `2.5`, the function once again recurses with the `tail`.

3. **Third Call**:
   * `head` = `"hello"`
   * `tail` = `('c')`
   
   Having outputted `"hello"`, the function moves on with `'c'`.

4. **Fourth Call**:
   * `head` = `'c'`
   * `tail` = *(empty)*
   
   After `'c'` is printed, the function will be invoked without arguments.

5. **Base Case**:
   To halt the infinite recursion, a base case is essential. A version of the `print` function that accepts no arguments acts as the base:

   ```cpp
   void print() {}
   ```

   This function activates at the sequence's end, effectively breaking the recursive chain.

### **Pack Expansion:**

The construct `tail...` represents pack expansion. Within our function's context, it "unpacks" the arguments left and forwards them to the subsequent function invocation. Essentially, it expands the `tail` parameter pack into a list of arguments.

### **In Conclusion:**

The variadic template function operates by gradually reducing the argument list with every recursive call. Each iteration handles an individual argument, passing on the remainder to the succeeding call. This procedure continues until all arguments are managed, at which point the base case comes into play, ending the series of calls.

---

Note: each unique combo of all args is a __template instantiation__, not just the type of head.

## Addendum: Non-Recursive Usage

### Perfect Forwarding with `std::forward`

#### 1. **What is `std::forward`?**
- `std::forward` is a utility in C++ that conditionally casts its argument to an rvalue if, and only if, that argument was originally passed as an rvalue.
- It's designed to work in conjunction with universal references (often termed forwarding references) which are a type of reference deduced in specific template contexts (like `Args&&... args`).

#### 2. **Purpose of `std::forward` in the example:**
- In the context of the `make_unique` function, `std::forward` ensures that arguments passed to `make_unique` retain their original value category (lvalue or rvalue) when they're passed on to the `T` constructor.
- Without `std::forward`, the distinction between lvalues and rvalues would be lost, potentially leading to less optimal code or even unintended behaviors.

#### 3. **Working Mechanism in the Example:**

```cpp
template <typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
```

- When you invoke `make_unique`, you pass it some arguments to be used for constructing an object of type `T`.
- These arguments can be lvalues, rvalues, or a mix.
- `std::forward<Args>(args)...` is a parameter pack expansion that applies `std::forward` to each argument in the pack. It ensures that each argument retains its original value category.
  
  **Usage Example:**

  ```cpp
  auto p = make_unique<MyClass>(arg1, arg2, std::move(arg3));
  ```

  - In the usage above, if `arg3` is an rvalue (due to `std::move`), `std::forward` ensures it remains an rvalue when passed to the `MyClass` constructor.

### **Summary:**

- **`std::forward`** is vital for preserving the original value category of arguments when forwarding them to another function or constructor.
- Especially within templates, this distinction between lvalue and rvalue is essential to achieve "perfect forwarding", ensuring that operations like move semantics work as intended. 

---
