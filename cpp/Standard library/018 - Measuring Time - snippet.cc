#include <iostream>
#include <chrono>

int main() {
    // Start the stopwatch
    auto start = std::chrono::high_resolution_clock::now();

    // Some time-consuming operation
    for (int i = 0; i < 1000000; ++i);

    // Stop the stopwatch
    auto stop = std::chrono::high_resolution_clock::now();

    // Compute the duration
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
