#include <iostream>
#include <thread>

// This variable is thread-local. Each thread has its own instance.
thread_local int my_local_variable = 0;

void thread_function(int id) {
    // Change the value of the thread-local variable
    my_local_variable = id;

    // Print the value
    std::cout << "Thread " << id << " has value: " << my_local_variable << std::endl;
}

int main() {
    std::thread t1(thread_function, 1);
    std::thread t2(thread_function, 2);

    t1.join();
    t2.join();

    // Even though the threads modified my_local_variable, its value in the main thread remains unchanged.
    std::cout << "Main thread has value: " << my_local_variable << std::endl;

    return 0;
}
