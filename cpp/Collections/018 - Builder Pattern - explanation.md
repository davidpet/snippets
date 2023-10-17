# Builder Pattern

The Builder Pattern is a design pattern designed to provide a flexible solution to various object creation problems in object-oriented programming. The intent of the Builder design pattern is to separate the construction of a complex object from its representation. By doing so, the same construction process can create different representations.

This snippet demonstrates how to build the builder pattern from scratch - it is __not built into any__ of the C++ standard library types!

In this example, we have a `Pizza` class (the Product). The `PizzaBuilder` class is the abstract Builder, and it has methods to create parts of the product. `HawaiianPizzaBuilder` and `SpicyPizzaBuilder` are concrete builders that inherit from `PizzaBuilder` and implement the building steps. The `Cook` class is the Director, it has a method `makePizza()` which performs the building steps in a specific sequence.

When we run the `main()` function, it creates a `Cook` and two types of `PizzaBuilder`. It then makes two types of pizzas and opens them. The output will be:

```
Pizza with cross dough, mild sauce and ham+pineapple topping. Mmm.
Pizza with pan baked dough, hot sauce and pepperoni+salami topping. Mmm.
```

This demonstrates the Builder Pattern in C++. The Builder Pattern is useful when a class is complex and requires step-by-step initialization of many fields and nested objects. This pattern also isolates the code for construction and representation. The same construction process can create different representations.
