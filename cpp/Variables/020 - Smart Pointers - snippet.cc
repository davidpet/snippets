#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int value) : value(value) {}
    void printValue() const { std::cout << "Value: " << value << std::endl; }
private:
    int value;
};

void sharedPtr() {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>(10);
    ptr1->printValue();

    // Create another shared_ptr pointing to the same object
    std::shared_ptr<MyClass> ptr2 = ptr1;
    ptr2->printValue();

    // Both pointers are valid and share ownership
    std::cout << "ptr1 use count: " << ptr1.use_count() << std::endl; // Outputs 2
    std::cout << "ptr2 use count: " << ptr2.use_count() << std::endl; // Outputs 2

    // Reset one pointer
    ptr1.reset();

    // The object is still alive because ptr2 is still pointing to it
    std::cout << "ptr2 use count after ptr1 reset: " << ptr2.use_count() << std::endl; // Outputs 1

    // Reset the second pointer, causing the object to be deleted
    ptr2.reset();
}

void uniquePtr() {
    // Smart pointer declaration and initialization
    std::unique_ptr<int> smart(new int);
    *smart = 50;
    std::cout << "Value of smart: " << *smart << std::endl; // Expected output: Value of smart: 50

    // no delete needed - the smart pointer d'tor handles it

}

int main() {
    uniquePtr();
    sharedPtr();
    
    return 0;
}