#include <iostream>
#include <thread>
#include <future>

void worker(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate some work
    prom.set_value(42);  // Set the value that will be retrieved by the associated future
}

int main() {
    std::promise<int> myPromise;  // Promise to provide an integer
    std::future<int> fut = myPromise.get_future();  // Get the associated future

    std::thread t(worker, std::ref(myPromise));  // Launch thread with promise as argument

    std::cout << "Main thread: Waiting for worker thread to finish...\n";

    int value = fut.get();  // Block and wait for the value from the worker thread
    std::cout << "Main thread: Value from worker thread is: " << value << "\n";

    t.join();  // Wait for the thread to finish

    return 0;
}
