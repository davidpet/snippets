# Coroutines (2020)

Coroutines in C++20 provide a way to break a function's execution while allowing it to be resumed later, making it more efficient for tasks like asynchronous operations. This is similar to both Python's `yield` and TypeScript's `async/await` kind of.

## C++20 Coroutines

### Overview
Coroutines are a generalization of subroutines (or functions) introduced in C++20, allowing for multiple entry points for suspending and resuming execution. They facilitate writing asynchronous code in a more straightforward, synchronous style.

### Key Concepts:
1. **Coroutine Handle**: It's the mechanism to interact with the coroutine. It lets you resume, suspend, or destroy a coroutine.
2. **Coroutine Promise**: An object associated with the coroutine, providing hooks that define specific behaviors during the coroutine's lifecycle.
3. **Co_await, co_return, and co_yield**: New keywords introduced for managing coroutine operations.

### Coroutine Advantages:
- **Asynchrony**: Useful in I/O-bound operations or tasks that inherently involve waiting, without blocking threads.
- **Lazy Evaluation**: Generates values on-demand.
- **Stateful Functions**: Maintains state between invocations.

In the example, the `async_computation` coroutine runs asynchronously, waiting for a second and then returning the value `42`.

### A Note on Toolchain Support:
As of the time of writing, not all compilers fully support C++20 coroutines. You might need to enable specific flags or rely on certain libraries, like `libcpp` with Clang.

### Further Reading:
It's recommended to read the official documentation and guidelines for coroutines since they introduce several new concepts and mechanisms. Moreover, their usage can vary based on specific asynchronous frameworks or platforms.

NOTE: compiler support for coroutines is still evolving, as demonstrated by the fact that the included snippet doesn't work.
