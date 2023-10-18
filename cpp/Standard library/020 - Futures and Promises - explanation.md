## Futures and Promises in C++

In C++, the `<future>` header provides tools to deal with asynchronous operations. Two key components of this header are `std::future` and `std::promise`.

### 1. `std::future`

A `std::future` represents a potential value or exception that will be available at some point in the future. It allows you to retrieve a value from another thread asynchronously.

### 2. `std::promise`

While `std::future` is used to get the value, `std::promise` is used to set the value. Essentially, a `std::promise` object can be used to set a value that can later be retrieved through an associated `std::future`.

### Summary:

- **`std::future`**: Represents a potential value that will be available in the future. Used to retrieve the value asynchronously.

- **`std::promise`**: Represents a synchronization primitive that can set a value, which can then be read through an associated `std::future`.

In the provided example, a worker thread sets the value `42` into a `std::promise`. The main thread then retrieves this value using the associated `std::future`. The `fut.get()` call in the main thread will block until the value is available (i.e., until the worker thread sets the value in the promise).
