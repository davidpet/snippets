# Class Declaration vs. Body
In the above code, we first declare a class `MyClass` and then define it. The class has a member function `printHello()` and a member variable `myVariable`. The function `printHello()` is defined outside the class using the scope resolution operator `::`. In the `main()` function, we create an instance of `MyClass`, call the member function, and access the member variable.

Now, let's look at a more complex example where we have a class with a constructor, destructor, and some other member functions.

```cpp
// Class Declaration
class ComplexClass;

// Class Definition
class ComplexClass {
public:
    // Constructor declaration
    ComplexClass(int value);

    // Destructor declaration
    ~ComplexClass();

    // Member function declarations
    void printValue();
    void setValue(int value);

private:
    // Member variable declaration
    int myValue;
};

// Constructor definition
ComplexClass::ComplexClass(int value) : myValue(value) {}

// Destructor definition
ComplexClass::~ComplexClass() {
    std::cout << "Object is being deleted" << std::endl;
}

// Member function definitions
void ComplexClass::printValue() {
    std::cout << "Value: " << myValue << std::endl; // This will print: Value: <value>
}

void ComplexClass::setValue(int value) {
    myValue = value;
}

int main() {
    // Create an instance of ComplexClass
    ComplexClass myObject(5);

    // Call the member functions
    myObject.printValue(); // This will print: Value: 5
    myObject.setValue(10);
    myObject.printValue(); // This will print: Value: 10

    return 0;
}
```
#####

In this code, we declare and define a class `ComplexClass` with a constructor, destructor, and two member functions. The constructor initializes the member variable `myValue` with the value passed as an argument. The destructor prints a message when an object of the class is being deleted. The member function `printValue()` prints the value of `myValue`, and `setValue()` sets a new value to `myValue`. In the `main()` function, we create an instance of `ComplexClass`, call the member functions, and observe the output.