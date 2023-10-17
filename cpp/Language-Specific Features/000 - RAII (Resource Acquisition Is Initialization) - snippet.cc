#include <iostream>

// A simple class to demonstrate RAII
class MyResource {
private:
    int* ptr;
public:
    // Constructor acquires the resource, in this case, dynamic memory
    MyResource(int size) {
        ptr = new int[size];
        std::cout << "Resource acquired\n";
    }

    // Destructor releases the resource
    ~MyResource() {
        delete[] ptr;
        std::cout << "Resource released\n";
    }

    // Function to use the resource
    void use() {
        std::cout << "Resource in use\n";
    }
};

int main() {
    {  // Could be done in a try {} block for instance
        MyResource r(10); // Resource is acquired here
        r.use(); // Resource is used
    } // Resource is released here when r goes out of scope

    return 0;
}

/*
This will print:

Resource acquired
Resource in use
Resource released
*/
