## Mutexes and Locks in C++

In multithreaded programming, ensuring thread safety is crucial. To protect shared data from concurrent access, C++ provides synchronization primitives such as mutexes and locks.

### 1. `std::mutex`

A `std::mutex` is a synchronization primitive that can be used to protect shared data from concurrent access. A thread locks a mutex to gain exclusive access to a critical section and unlocks it when done.

### 2. `std::lock_guard`

A `std::lock_guard` is a lightweight RAII wrapper for a mutex. It locks a mutex upon construction and unlocks it upon destruction, ensuring that the mutex is always released.

### 3. `std::unique_lock`

A more flexible RAII wrapper for a mutex. In addition to locking and unlocking a mutex, `std::unique_lock` supports deferred locking, timed locking, and transfer of lock ownership.

### Other Lock Types:

- **`std::recursive_mutex`**: A mutex that can be locked multiple times by the same thread.

- **`std::timed_mutex` & `std::recursive_timed_mutex`**: Mutexes that allow time-limited attempts to acquire a lock.

- **Semaphores (`std::counting_semaphore` in C++20)**: A synchronization primitive that controls access to a resource by multiple threads. Unlike a mutex, a semaphore can allow more than one thread to access the resource simultaneously, depending on its initial count.

### Summary:

- **`std::mutex`**: Basic synchronization primitive to protect shared data from concurrent access.
  
- **`std::lock_guard`**: RAII wrapper for `std::mutex` ensuring automatic release of the mutex.

- **`std::unique_lock`**: A more flexible RAII wrapper for mutexes.

Using these synchronization primitives properly ensures thread-safe access to shared data and helps prevent race conditions and data corruption.
