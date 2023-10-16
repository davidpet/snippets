# Polymorphism

This code demonstrates the concept of polymorphism in C++. Polymorphism is a feature of object-oriented programming that allows objects of different classes related by inheritance to respond differently to the same function call.

In this code, we have a base class `Animal` with a virtual function `sound()`. This function is overridden in the derived classes `Dog` and `Cat`. When we call the `sound()` function on objects of these classes, the appropriate version of the function is called, demonstrating polymorphism.

The `virtual` keyword is used to allow a function to be overridden in derived classes. The `override` keyword is used in derived classes to indicate that the function is intended to override a virtual function in the base class.

The `Animal*` type of the pointers `animal`, `dog`, and `cat` allows us to treat objects of the derived classes `Dog` and `Cat` as objects of the base class `Animal`, demonstrating the principle of polymorphism. The correct version of the `sound()` function is called based on the actual type of the object, not the type of the pointer.

The `delete` keyword is used to free the memory allocated with `new`. This is important to prevent memory leaks.

Note: if you need to cast to a more derived class, you can use `dynamic_cast<>`, which relies on __RTTI__.

Note: if you declare a function virtual in a base, it remains virtual whether you continue to declare it so in subclasses, but it's better style to indicate it with `override`.  There is no such thing as virtual until hits a non-virtual version and then stops (for some reason I used to think that was the case and keep reminding myself it's not).

Note: `override` was introduced in C++ 11 and is not strictly required but is more clear.  It will fail to compile if the method wasn't virtual to begin with in the base.
