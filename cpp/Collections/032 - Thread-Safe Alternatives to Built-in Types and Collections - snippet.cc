Sure, here is a code snippet demonstrating the use of thread-safe alternatives to built-in types and collections in C++. In this case, we will use the `std::atomic` for built-in types and `std::mutex` along with `std::lock_guard` for collections.

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <atomic>

// Thread-safe integer using std::atomic
std::atomic<int> atomicInt(0);

// Non thread-safe vector
std::vector<int> myVector;

// Mutex to protect myVector
std::mutex myMutex;

void safe_increment() {
    // Increment atomicInt in a thread-safe manner
    ++atomicInt;

    // Protect myVector with a lock_guard - it automatically locks the mutex
    // when we enter this scope, and releases the lock when we leave the scope.
    std::lock_guard<std::mutex> guard(myMutex);
    myVector.push_back(1);
}

int main() {
    // Launch 10 threads to increment atomicInt and push to myVector
    std::vector<std::thread> threads;
    for(int i = 0; i < 10; ++i) {
        threads.push_back(std::thread(safe_increment));
    }

    // Join all threads
    for(auto& thread : threads) {
        thread.join();
    }

    // Print the results
    std::cout << "atomicInt = " << atomicInt << std::endl; // Expected: atomicInt = 10
    std::cout << "myVector size = " << myVector.size() << std::endl; // Expected: myVector size = 10

    return 0;
}