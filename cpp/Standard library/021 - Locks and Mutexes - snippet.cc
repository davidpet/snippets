#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;  // Mutex to protect shared data
int counter = 0;  // Shared data

void increment() {
    for (int i = 0; i < 10000; ++i) {
        std::lock_guard<std::mutex> lock(mtx);  // Lock the mutex
        ++counter;  // Critical section
        // Mutex is automatically released when lock goes out of scope
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final counter value: " << counter << "\n";  // Should print 20000

    return 0;
}
