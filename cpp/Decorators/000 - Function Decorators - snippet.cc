C++ does not natively support decorators like Python or JavaScript. However, we can achieve similar functionality using class inheritance and virtual functions. Here's an example of how you might implement a decorator pattern in C++:

#include <iostream>

// Define the Component interface
class Component {
public:
    virtual void operation() const = 0;
};

// Define the ConcreteComponent class
class ConcreteComponent : public Component {
public:
    void operation() const override {
        std::cout << "ConcreteComponent operation" << std::endl; // This will print "ConcreteComponent operation"
    }
};

// Define the Decorator base class
class Decorator : public Component {
protected:
    Component* component;

public:
    Decorator(Component* c) : component(c) {}
    virtual void operation() const override {
        component->operation();
    }
};

// Define a ConcreteDecorator class
class ConcreteDecorator : public Decorator {
public:
    ConcreteDecorator(Component* c) : Decorator(c) {}

    void operation() const override {
        std::cout << "ConcreteDecorator operation start" << std::endl; // This will print "ConcreteDecorator operation start"
        Decorator::operation();
        std::cout << "ConcreteDecorator operation end" << std::endl; // This will print "ConcreteDecorator operation end"
    }
};

int main() {
    // Create a ConcreteComponent
    ConcreteComponent c;

    // Decorate it with ConcreteDecorator
    ConcreteDecorator d(&c);

    // Call operation
    d.operation();

    return 0;
}