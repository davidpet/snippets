Sure, let's start with a basic example of a class declaration and definition in C++.

// Class Declaration
class MyClass;

// Class Definition
class MyClass {
public:
    // Member function declaration
    void printHello();

    // Member variable declaration
    int myVariable;
};

// Member function definition
void MyClass::printHello() {
    std::cout << "Hello, World!" << std::endl;
}

int main() {
    // Create an instance of MyClass
    MyClass myObject;

    // Call the member function
    myObject.printHello(); // This will print: Hello, World!

    // Access the member variable
    myObject.myVariable = 10;
    std::cout << myObject.myVariable << std::endl; // This will print: 10

    return 0;
}