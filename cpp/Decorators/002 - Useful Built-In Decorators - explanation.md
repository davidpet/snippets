# Useful Built-In Decorators
In this example, `ConcreteComponent` is a simple class that implements the `Component` interface. `ConcreteDecorator` is a decorator class that also implements the `Component` interface, but it has a reference to another `Component`. When its `operation` method is called, it performs some decoration before and after calling the same method on the referenced `Component`.

This way, you can dynamically add behavior to objects. You can also stack multiple decorators on top of each other, each adding their own behavior.