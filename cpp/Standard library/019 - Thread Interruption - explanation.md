# Thread Interruption

C++'s threading model, provided through the `<thread>` header in the C++ Standard Library, is different from Java's. While Java has built-in thread interruption via the `Thread.interrupt()` method and `InterruptedException`, C++ does not provide a direct mechanism for thread interruption. However, you can achieve similar functionality using condition variables, atomic variables, and other synchronization primitives.

Let's dive in.

### 1. Interrupting Threads

In C++, you might use an `std::atomic_bool` to signal to a thread that it should stop what it's doing. This approach relies on cooperative interruption: the thread periodically checks the atomic variable to see if it's been signaled to stop.

### 2. Waiting for Threads

To wait for a thread to complete its execution, you use the `join()` method. This blocks the calling thread until the thread represented by the `std::thread` object has finished executing.

### 3. Condition Variables

To make a thread wait for some condition or to notify a thread of some event, you can use `std::condition_variable`. 

### Summary:

- **Interrupting Threads**: C++ does not have built-in thread interruption like Java. Instead, you'd typically use atomic variables or other synchronization mechanisms to achieve cooperative interruption.
  
- **Waiting for Threads**: Use `join()` to block and wait for a thread to complete its execution.
  
- **Condition Variables**: These can be used to make a thread wait for some event or condition and to notify a thread of some event.

In the example, the worker thread checks the `stopFlag` atomic variable. The main thread sets this flag to signal the worker thread to stop. The condition variable is used to make the worker thread wait for a signal or a timeout, whichever comes first.
