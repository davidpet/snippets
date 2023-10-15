#include <iostream>

// Define a class to manage the context
class ContextManager {
public:
    // Constructor
    ContextManager(const std::string& contextName) : name(contextName) {
        std::cout << "Entering context: " << name << std::endl;
    }

    // Destructor
    ~ContextManager() {
        std::cout << "Exiting context: " << name << std::endl;
    }

private:
    std::string name;
};

int main() {
    {
        ContextManager cm("Main Context");
        // When the ContextManager object goes out of scope, its destructor is called
        // This is where we can do any necessary cleanup
    }

    return 0;
}