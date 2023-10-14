# Threading/async/await/lock/promise/mutex
1. The `std::mutex` class is a synchronization primitive that can be used to protect shared data from being simultaneously accessed by multiple threads. In this example, we use a mutex to ensure that the two threads do not print to `std::cout` at the same time, which could result in garbled output.

2. The `std::thread` class represents a single thread of execution. Threads allow multiple functions to execute concurrently. Threads begin execution immediately upon construction of the associated thread object (pending any OS scheduling delays), starting at the top-level function provided as a constructor argument.

3. The `std::promise` and `std::future` classes provide a facility to store a value or an exception that is later acquired asynchronously via a `std::future` object. Each `std::promise` object is meant to be used only once.

4. The `std::this_thread::sleep_for` function blocks the execution of the current thread for at least the specified sleep_duration. This function may block for longer due to scheduling or resource contention delays.

5. The `join()` function blocks the current thread until the thread identified by `*this` finishes its execution. If that thread has already finished executing, the `join()` function returns immediately. The `join()` function must be called once for each thread that is launched. If `join()` is not called, the program will terminate in an uncontrolled manner when the main thread finishes.