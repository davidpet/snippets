In C++, there is no built-in support for decorators as in Python. However, we can achieve similar functionality using inheritance and polymorphism. Here's an example of how you might implement a decorator pattern in C++.

#include <iostream>

// Define the Component interface
class Component {
public:
    virtual void operation() = 0;
};

// Define the ConcreteComponent
class ConcreteComponent : public Component {
public:
    void operation() override {
        std::cout << "ConcreteComponent operation" << std::endl; // This will print "ConcreteComponent operation"
    }
};

// Define the Decorator
class Decorator : public Component {
protected:
    Component* component;
public:
    Decorator(Component* c) : component(c) {}
    virtual void operation() override {
        component->operation();
    }
};

// Define the ConcreteDecorator
class ConcreteDecorator : public Decorator {
public:
    ConcreteDecorator(Component* c) : Decorator(c) {}
    void operation() override {
        std::cout << "Before decoration" << std::endl; // This will print "Before decoration"
        Decorator::operation();
        std::cout << "After decoration" << std::endl; // This will print "After decoration"
    }
};

int main() {
    Component* component = new ConcreteComponent();
    Component* decorator = new ConcreteDecorator(component);
    decorator->operation();
    delete component;
    delete decorator;
    return 0;
}