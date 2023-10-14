# Logging
1. The first part of the code demonstrates basic logging to the console using `std::cout`. This is the simplest form of logging in C++.
2. The second part shows how to log to a file using `std::ofstream`. This is a basic way to log to a file in C++, but it doesn't provide many features.
3. The third and fourth parts of the code demonstrate how to use the spdlog library for logging. spdlog is a popular C++ logging library that provides many features, such as multi-threaded logging and log level control.
4. The `spdlog::info` function logs a message at the info level. spdlog supports multiple log levels, such as trace, debug, info, warn, error, critical, and off.
5. The `spdlog::basic_logger_mt` function creates a multi-threaded logger that logs to a file. The first argument is the name of the logger, and the second argument is the name of the file to log to.
6. The `file_logger->info` function logs a message at the info level to the file specified when the logger was created.
7. The spdlog functions can throw exceptions of type `spdlog::spdlog_ex` if an error occurs. These exceptions can be caught and handled as shown in the code.