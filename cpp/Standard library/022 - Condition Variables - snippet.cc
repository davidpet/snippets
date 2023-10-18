#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

std::queue<int> q;
std::mutex mtx;
std::condition_variable cv;

void producer() {
    for (int i = 0; i < 5; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        q.push(i);
        std::cout << "Produced: " << i << "\n";
        cv.notify_one();  // Notify a waiting thread
        std::this_thread::sleep_for(std::chrono::seconds(1));  // Sleep for demonstration purposes
    }
}

void consumer() {
    std::unique_lock<std::mutex> lock(mtx);
    while (q.empty()) {
        cv.wait(lock);  // Wait for a notification
    }
    while (!q.empty()) {
        int val = q.front();
        q.pop();
        std::cout << "Consumed: " << val << "\n";
    }
}

int main() {
    std::thread prod(producer);
    std::thread cons(consumer);
    
    prod.join();
    cons.join();

    return 0;
}
