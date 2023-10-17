## `std::scoped_lock`

Introduced in C++17, `std::scoped_lock` is a lock class that manages the locking of any number of mutexes in order to prevent data races. It always locks the given mutexes, ensuring no two mutexes are locked by the same thread concurrently, thereby avoiding the potential for deadlock. It's particularly useful in situations where multiple mutexes need to be acquired simultaneously.

`std::scoped_lock` follows the RAII paradigm: when an object of type `std::scoped_lock` is created, it attempts to take ownership of the mutexes it's given. When the `std::scoped_lock` object is destroyed, ownership of the mutexes is released.

### Syntax:
```cpp
std::scoped_lock lock(mutex1, mutex2, ...);
```

### Example:

```cpp
#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx1;
std::mutex mtx2;

void print_even(int n) {
    for (int i = 0; i < n; i += 2) {
        std::scoped_lock lock(mtx1, mtx2);
        std::cout << i << " ";
    }
}

void print_odd(int n) {
    for (int i = 1; i < n; i += 2) {
        std::scoped_lock lock(mtx1, mtx2);
        std::cout << i << " ";
    }
}

int main() {
    std::thread t1(print_even, 10);
    std::thread t2(print_odd, 10);
    t1.join();
    t2.join();

    return 0;
}
```

### Notes:
- `std::scoped_lock` is defined in the `<mutex>` header.
- Unlike `std::lock_guard`, `std::scoped_lock` can lock multiple mutexes simultaneously, ensuring a deadlock-free order.
- You don't have to specify the number of mutexes it should lock during its instantiation. It's deduced automatically.
  