# Destructors/Finalizers/Disposable Pattern
The output of the above code will be:
```
Constructor called!
Destructor called!
```
##### In the above code, we have a class named `MyClass` with a constructor and a destructor. The constructor is called when an object of the class is created, and the destructor is called when the object goes out of scope or is explicitly deleted.

##### Destructors in C++ are used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed. A destructor is called for a class object when that object passes out of scope or is explicitly deleted.

##### A destructor takes no arguments and has no return type. Its name is the same as the class name but is preceded by a tilde (~). For example, the destructor for class MyClass is ~MyClass().

##### If we do not provide a destructor in a class, C++ compiler generates a default destructor for us, which does nothing.

##### Now, let's demonstrate the use of destructors when dealing with dynamically allocated memory.

```cpp
#include <iostream>

// Define a class named DynamicArray
class DynamicArray {
private:
    int* arr;
public:
    // Constructor
    DynamicArray(int size) {
        arr = new int[size]; // dynamically allocate memory
        std::cout << "Memory allocated!" << std::endl;
    }

    // Destructor
    ~DynamicArray() {
        delete[] arr; // deallocate memory
        std::cout << "Memory deallocated!" << std::endl;
    }
};

int main() {
    // Create an object of DynamicArray
    DynamicArray obj(5);

    // The destructor will be called automatically when obj goes out of scope
    return 0;
}
```
##### The output of the above code will be:
```
Memory allocated!
Memory deallocated!
```
##### In the above code, we have a class named `DynamicArray` that dynamically allocates memory in its constructor and deallocates that memory in its destructor. This is a common use case for destructors, to clean up resources (like memory) that the class uses.