#include <iostream>
#include <concepts>
#include <coroutine>
#include <vector>

// 1. Concepts
// A concept is a predicate for types. It's a way to express type requirements.
// Here we define a concept 'Addable' which checks if a type T can be added to another type T.
template<typename T>
concept Addable = requires(T a, T b) {
    { a + b } -> std::same_as<T>;
};

// A function that uses the Addable concept.
// This function will only accept types that satisfy the Addable concept.
template<Addable T>
T add(T a, T b) {
    return a + b;
}

// 2. Coroutines
// A coroutine is a function that can suspend execution to be resumed later.
// This allows for more efficient code, especially in a single-threaded environment.
struct generator {
    struct promise_type;
    using handle_type = std::coroutine_handle<promise_type>;
    struct promise_type {
        int current_value;
        auto get_return_object() { return generator{handle_type::from_promise(*this)}; }
        auto initial_suspend() { return std::suspend_always{}; }
        auto final_suspend() { return std::suspend_always{}; }
        void unhandled_exception() { std::exit(1); }
        void return_void() {}
        auto yield_value(int value) {
            current_value = value;
            return std::suspend_always{};
        }
    };
    bool move_next() { return coro ? (coro.resume(), !coro.done()) : false; }
    int current_value() { return coro.promise().current_value; }
    generator(generator const&) = delete;
    generator(generator && rhs) : coro(rhs.coro) { rhs.coro = nullptr; }
    ~generator() { if (coro) coro.destroy(); }
private:
    generator(handle_type h) : coro(h) {}
    handle_type coro;
};

generator range(int end) {
    for (int i = 0; i < end; ++i)
        co_yield i;
}

// 3. Modules
// Modules are a way to encapsulate code and reduce compilation times.
// Unfortunately, they can't be demonstrated in a single file, but here's how you'd use them:
// export module MyModule; // This would be in MyModule.ixx
// export void say_hello() { std::cout << "Hello, world!\n"; } // This would also be in MyModule.ixx
// import MyModule; // This would be in another file
// MyModule::say_hello(); // This would also be in another file

int main() {
    // Testing the Addable concept
    std::cout << add(1, 2) << '\n'; // Prints: 3
    std::cout << add(std::string("Hello, "), std::string("world!")) << '\n'; // Prints: Hello, world!

    // Testing the coroutine
    auto numbers = range(10);
    while (numbers.move_next())
        std::cout << numbers.current_value() << '\n'; // Prints: 0 1 2 3 4 5 6 7 8 9
}
