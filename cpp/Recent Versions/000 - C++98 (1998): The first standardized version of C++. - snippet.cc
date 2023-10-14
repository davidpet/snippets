// C++98 Code Snippet

#include <iostream> // Include the I/O stream library
#include <vector>   // Include the vector library

// Define a class
class MyClass {
public:
    // Constructor
    MyClass(int x) : x_(x) {}

    // Member function
    int getX() const { return x_; }

private:
    int x_;
};

// Define a function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Variable declaration and initialization
    int a = 10;
    int b = 20;

    // Use of the function template
    int sum = add(a, b);
    std::cout << "Sum: " << sum << std::endl; // Expected output: Sum: 30

    // Use of the STL vector
    std::vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);

    // Use of the STL vector iterator
    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "Vector element: " << *it << std::endl; // Expected output: Vector element: 10, Vector element: 20
    }

    // Use of the class
    MyClass myClass(50);
    std::cout << "Class member: " << myClass.getX() << std::endl; // Expected output: Class member: 50

    return 0;
}