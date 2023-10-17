#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

// Declare a mutex
std::mutex mtx;

// Declare a vector
std::vector<int> vec;

// Function to add elements to the vector
void add_to_vector(int n) {
    // Lock the mutex before accessing the vector
    mtx.lock();
    vec.push_back(n);
    std::cout << "Added " << n << " to the vector\n";
    // Unlock the mutex after accessing the vector
    mtx.unlock();
}

// Function to print elements of the vector
void print_vector() {
    // Lock the mutex before accessing the vector
    mtx.lock();
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    // Unlock the mutex after accessing the vector
    mtx.unlock();
}

int main() {
    // Create multiple threads that add elements to the vector
    std::thread t1(add_to_vector, 1); // prints: Added 1 to the vector
    std::thread t2(add_to_vector, 2); // prints: Added 2 to the vector
    std::thread t3(add_to_vector, 3); // prints: Added 3 to the vector

    // Wait for all threads to finish
    t1.join();
    t2.join();
    t3.join();

    // Print the vector
    print_vector(); // prints: 1 2 3 

    return 0;
}
