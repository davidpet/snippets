Sure, here is a code snippet demonstrating logging in C++ using the standard library and a popular logging library called spdlog.

#include <iostream>
#include <fstream>
#include <string>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>

int main() {
    // Basic logging with std::cout
    std::string message = "Hello, World!";
    std::cout << message << std::endl; // Prints: Hello, World!

    // Logging to a file with std::ofstream
    std::ofstream logfile("log.txt");
    if (logfile.is_open()) {
        logfile << "This is a log message." << std::endl;
        logfile.close();
    } else {
        std::cout << "Unable to open log file." << std::endl; // Prints: Unable to open log file.
    }

    // Using spdlog for console logging
    spdlog::info("Welcome to spdlog!"); // Prints: [timestamp] [thread id] info: Welcome to spdlog!

    // Using spdlog for file logging
    try {
        auto file_logger = spdlog::basic_logger_mt("basic_logger", "log.txt");
        file_logger->info("Logged to file using spdlog!"); // Writes: [timestamp] [thread id] info: Logged to file using spdlog!
    } catch (const spdlog::spdlog_ex& ex) {
        std::cout << "Log failed: " << ex.what() << std::endl; // Prints: Log failed: [error message]
    }

    return 0;
}