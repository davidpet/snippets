// Forward declaration of a function
void function1(); // This is a forward declaration of function1

// Forward declaration of a class
class MyClass; // This is a forward declaration of MyClass

// Forward declaration of an enum
enum MyEnum; // This is a forward declaration of MyEnum

int main() {
    // Use of forward declared function
    function1(); // This will print "Function1 called"

    // Use of forward declared class
    MyClass* myClass = new MyClass(); // This will create an instance of MyClass

    // Use of forward declared enum
    MyEnum myEnum = MyEnum::VALUE1; // This will assign VALUE1 to myEnum

    return 0;
}

// Definition of forward declared function
void function1() {
    std::cout << "Function1 called" << std::endl; // This will print "Function1 called"
}

// Definition of forward declared class
class MyClass {
public:
    MyClass() {
        std::cout << "MyClass constructor called" << std::endl; // This will print "MyClass constructor called"
    }
};

// Definition of forward declared enum
enum MyEnum {
    VALUE1, // This is VALUE1 of MyEnum
    VALUE2  // This is VALUE2 of MyEnum
};