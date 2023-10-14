# Class Decorators
In this code, we have a `Component` interface that defines an `operation` method. The `ConcreteComponent` is a class that implements this interface. The `Decorator` is also a `Component`, but it has a reference to another `Component` that it decorates. The `ConcreteDecorator` is a `Decorator` that adds new behavior before and after calling the `operation` on the `Component` it decorates.

In the `main` function, we create a `ConcreteComponent` and a `ConcreteDecorator` that decorates the `ConcreteComponent`. When we call `operation` on the `ConcreteDecorator`, it first prints "Before decoration", then calls `operation` on the `ConcreteComponent`, and finally prints "After decoration".

This is a simple example, but you can create more complex decorators by adding more functionality in the `Decorator` or by chaining decorators together.