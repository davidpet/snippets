Sure, here is a comprehensive code snippet demonstrating the usage of time and dates in C++ standard library:

#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

int main() {
    // Get the current time point
    auto now = std::chrono::system_clock::now();
    std::cout << "Current time point: " << now.time_since_epoch().count() << '\n'; // Prints the time since epoch in nanoseconds

    // Convert time point to time_t for compatibility with C functions
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::cout << "Current time: " << std::ctime(&now_c); // Prints the current date and time

    // Convert time point to tm struct for more detailed information
    std::tm* now_tm = std::localtime(&now_c);
    std::cout << "Year: " << now_tm->tm_year + 1900 << '\n'; // Prints the current year
    std::cout << "Month: " << now_tm->tm_mon + 1 << '\n'; // Prints the current month
    std::cout << "Day: " << now_tm->tm_mday << '\n'; // Prints the current day

    // Use put_time to format the time
    std::cout << "Formatted time: " << std::put_time(now_tm, "%Y-%m-%d %H:%M:%S") << '\n'; // Prints the current date and time in the format YYYY-MM-DD HH:MM:SS

    // Use duration to represent time intervals
    std::chrono::duration<int, std::ratio<60*60*24>> one_day (1);
    auto tomorrow = now + one_day;
    std::time_t tomorrow_c = std::chrono::system_clock::to_time_t(tomorrow);
    std::cout << "Tomorrow: " << std::ctime(&tomorrow_c); // Prints the date and time for tomorrow

    return 0;
}