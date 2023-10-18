#include <iostream>
#include <thread>
#include <atomic>
#include <condition_variable>
#include <chrono>

std::atomic_bool stopFlag(false);
std::mutex m;
std::condition_variable cv;

void workerThread() {
    while (!stopFlag.load()) {
        std::unique_lock<std::mutex> lock(m);
        cv.wait_for(lock, std::chrono::seconds(1), []{ return stopFlag.load(); });

        if (!stopFlag.load()) {
            std::cout << "Worker thread doing some work...\n";
        } else {
            std::cout << "Worker thread stopping...\n";
        }
    }
}

int main() {
    std::thread t(workerThread);

    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    std::cout << "Main thread signaling worker thread to stop...\n";
    stopFlag.store(true);
    cv.notify_one();

    t.join();
    std::cout << "Main thread exiting...\n";

    return 0;
}
