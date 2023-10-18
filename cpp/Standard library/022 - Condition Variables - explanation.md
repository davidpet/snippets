## Condition Variables in C++

### What is a Condition Variable?

A condition variable is a synchronization primitive used in conjunction with a mutex to allow threads to wait until a particular condition becomes true.

### How does it work?

- Threads can be made to wait for some condition (e.g., a queue being non-empty).
  
- When the condition is met, one or all waiting threads can be notified to wake up.

### Key Methods:

1. `wait()`: Puts the thread into a waiting state until notified.
   
2. `notify_one()`: Wakes up a single waiting thread.
   
3. `notify_all()`: Wakes up all waiting threads.

## Java's Condition Variable Equivalent

In Java, the `Object` class provides the methods `wait()`, `notify()`, and `notifyAll()` that offer a similar mechanism to condition variables.

### Comparison:

1. **Granularity**: In C++, the condition variable is separate from the mutex. In Java, every object has a built-in monitor that integrates both locking and condition wait-notify functionality.

2. **Usage**:
   - In C++, you explicitly use a `std::condition_variable` with a `std::mutex`.
   - In Java, any object can be synchronized using `synchronized` and its intrinsic lock can be used for waiting and notification.

3. **Safety**: In C++, the `std::condition_variable` requires an explicit `std::unique_lock` to be passed to its `wait()` method to ensure the associated mutex is properly locked. Java abstracts this away, making the association between the lock and the condition implicit.

4. **Flexibility**: C++'s separation of mutexes and condition variables provides a finer level of control, allowing for more complex synchronization schemes.

### Java Equivalent Code:

```java
public class ProducerConsumer {
    private final Object lock = new Object();
    private java.util.Queue<Integer> queue = new java.util.LinkedList<>();

    public void producer() throws InterruptedException {
        for (int i = 0; i < 5; ++i) {
            synchronized (lock) {
                queue.add(i);
                System.out.println("Produced: " + i);
                lock.notify();  // Notify a waiting thread
            }
            Thread.sleep(1000);  // Sleep for demonstration purposes
        }
    }

    public void consumer() throws InterruptedException {
        synchronized (lock) {
            while (queue.isEmpty()) {
                lock.wait();  // Wait for a notification
            }
            while (!queue.isEmpty()) {
                int val = queue.poll();
                System.out.println("Consumed: " + val);
            }
        }
    }

    public static void main(String[] args) {
        ProducerConsumer pc = new ProducerConsumer();

        Thread prod = new Thread(() -> {
            try {
                pc.producer();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        Thread cons = new Thread(() -> {
            try {
                pc.consumer();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        prod.start();
        cons.start();
    }
}
```

In summary, both C++ and Java offer powerful primitives for multithreaded synchronization. The mechanisms differ slightly in terms of granularity and usage, but the underlying concepts remain the same.

Note: in the __thread interruption__ snippet above, another overload of `cv.wait_for` is shown that takes a time out and a predicate that you're waiting to become true in the time given.  It returns __bool__ (though that snippet ignores it).
