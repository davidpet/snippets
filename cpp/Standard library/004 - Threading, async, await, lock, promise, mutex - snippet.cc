Sure, here is a comprehensive example of using threading, async, await, lock, promise, and mutex in C++.

#include <iostream>
#include <thread>
#include <mutex>
#include <future>

std::mutex mtx; // Declare a mutex

void print_block(int n, char c) {
    // Lock the mutex to prevent other threads from accessing the same resource
    mtx.lock();
    for (int i=0; i<n; ++i) { std::cout << c; }
    std::cout << '\n';
    mtx.unlock(); // Unlock the mutex
}

std::promise<int> prom; // Declare a promise

void print_global_promise() {
    std::future<int> fut = prom.get_future(); // Get a future from the promise
    int x = fut.get(); // Get the value from the future. This will block until the promise is fulfilled
    std::cout << "value: " << x << '\n'; // Prints "value: 10"
}

int main() {
    std::thread th1(print_block,50,'*');  // Launch a thread that prints 50 asterisks
    std::thread th2(print_block,50,'$');  // Launch a thread that prints 50 dollar signs

    th1.join(); // Wait for thread th1 to finish
    th2.join(); // Wait for thread th2 to finish

    std::thread th3(print_global_promise); // Launch a thread that will print the value of the promise
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Sleep for a second to ensure that th3 has started
    prom.set_value(10); // Fulfill the promise
    th3.join(); // Wait for thread th3 to finish

    return 0;
}