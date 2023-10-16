# Dynamic Polymorphism

The usual kind of polymorphism with classes still works with templated classes.  When using `dynamic_cast`, use the name of the class with tempalate args (eg. `MyClass<int>*`), and it should all work out the way the code gets generated.
