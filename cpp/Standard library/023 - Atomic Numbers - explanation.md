## `std::atomic` in C++

### Introduction
In multithreaded applications, it's common to encounter situations where multiple threads need to update shared data. Using simple, non-atomic operations can lead to race conditions where the final value of the shared data depends on the order of the threads' operations.

The C++ standard library provides the `std::atomic` template class, which wraps scalar types to ensure that operations on them are atomic, meaning they are uninterruptible and will be seen as a single operation by other threads.

### Key Points:
- Atomic operations are operations that run completely independently of any other operations and are uninterruptible.
- Using `std::atomic` prevents data races and ensures memory orderings.
- `std::atomic` is templated, and you can have atomic operations on integral types, pointers, and user-defined types.
  
In the example:
- We declare a global `counter` of type `std::atomic<int>`.
- Two threads increment this counter concurrently.
- The final value of the `counter` will be `200000`, as each thread increments the counter `100000` times. The `std::atomic` guarantees atomic increments and ensures there are no data races.

### Comparison with non-atomic:
If `counter` was a plain `int`, we would almost certainly not get the expected result because of race conditions.

### Note:
Atomic operations might appear slower than their non-atomic counterparts due to the memory barriers they introduce, but they are essential for correct multithreaded behavior in many scenarios.

---

I hope this gives a clear understanding of `std::atomic` in C++. It's an invaluable tool when dealing with multithreading and concurrency in C++.
