#include <iostream>
#include <vector>

// Define a simple class to demonstrate operator[] overloading
class MyClass {
private:
    std::vector<int> data;

public:
    MyClass(int size) : data(size) {}

    // Overload the [] operator.
    int& operator[](int index) {
        return data[index];  // This will return a reference to the element at the given index.
    }
};

int main() {
    MyClass myObject(5);  // Create an object with 5 elements.

    // Use the overloaded [] operator to access elements.
    myObject[0] = 10;
    myObject[1] = 20;
    myObject[2] = 30;
    myObject[3] = 40;
    myObject[4] = 50;

    // Print the elements.
    for (int i = 0; i < 5; ++i) {
        std::cout << myObject[i] << std::endl;  // This will print 10, 20, 30, 40, 50.
    }

    return 0;
}