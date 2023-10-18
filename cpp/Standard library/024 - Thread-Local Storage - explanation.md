## Thread-Local Storage in C++

### Introduction
Thread-Local Storage (TLS) allows variables to have a unique value for each thread. This means that every thread has its own instance of a variable, isolated from other threads, thus avoiding potential data races on that variable.

In C++, you can declare a variable as thread-local using the `thread_local` keyword.

`thread_local` is a keyword introduced in C++11, and it's part of the core language, not a library feature. When you use `thread_local` before a variable declaration, it indicates that each thread should have its own, separate instance of the variable. This is in contrast to a typical static or global variable, which would be shared among all threads.

In essence, `thread_local` is a __storage class specifier__, similar to `static`, `extern`, or `auto`, that influences the linkage and lifetime of the variable it qualifies.

### Key Points:
1. A `thread_local` variable is initialized for each thread that accesses it.
2. The variable retains its value between function calls within the same thread.
3. Different threads can set and retrieve different values independently.

In the example:
- `my_local_variable` is declared as thread-local.
- Two threads, `t1` and `t2`, modify the value of `my_local_variable`.
- Even though the threads change the value, the instance of `my_local_variable` in the `main` thread remains `0`.

### Use Cases:
Thread-Local Storage is useful when:
- You have some data that needs to be different for each thread, e.g., random number generators, database connection handles, etc.
- You want to avoid the overhead of locking by ensuring each thread operates on its own instance of data.

### Note:
Overuse of TLS can lead to increased memory consumption, as each thread will have its own copy of the variable. Also, TLS variables are not suited for communication between threads, as each thread has its own isolated instance.
