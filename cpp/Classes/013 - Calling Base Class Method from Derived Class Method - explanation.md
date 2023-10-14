# Calling Base Class Method from Derived Class Method
In the above code, we have a base class `Base` and a derived class `Derived`. The base class has a method `baseMethod()` and the derived class has a method `derivedMethod()`. Inside `derivedMethod()`, we are calling the base class method `baseMethod()`.

In the `main()` function, we create an object of the derived class and call the `derivedMethod()`. This in turn calls the `baseMethod()` of the base class and prints "Base class method called!".

This is a simple and straightforward way to call a base class method from a derived class method in C++. However, in more complex scenarios where the base and derived classes have methods with the same name, you would need to use the scope resolution operator `::` to specify that you want to call the base class method. Here is an example:

```cpp
#include <iostream>

// Base class
class Base {
public:
    // Base class method
    void method() {
        std::cout << "Base class method called!" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Derived class method with the same name as base class method
    void method() {
        std::cout << "Derived class method called!" << std::endl;
    }

    // Another derived class method
    void anotherMethod() {
        // Calling base class method from derived class method using scope resolution operator
        Base::method();
    }
};

int main() {
    // Creating object of derived class
    Derived d;

    // Calling derived class method
    d.method(); // This will print: "Derived class method called!"

    // Calling another derived class method
    d.anotherMethod(); // This will print: "Base class method called!"
    
    return 0;
}
```

In this code, both the base class and the derived class have a method named `method()`. Inside the `anotherMethod()` of the derived class, we are calling the base class `method()` using the scope resolution operator `::`. This ensures that the base class method is called, not the derived class method with the same name.