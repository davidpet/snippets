#include <iostream>
#include <coroutine>
#include <future>

std::future<int> async_computation() {
    co_await std::async(std::launch::async, []() { std::this_thread::sleep_for(std::chrono::seconds(1)); });
    co_return 42; // After waiting, we return the result
}

int main() {
    auto future = async_computation(); // Launch the coroutine

    // Do other work ...

    int result = future.get(); // Obtain the result from the coroutine
    std::cout << "Result: " << result << std::endl;

    return 0;
}
