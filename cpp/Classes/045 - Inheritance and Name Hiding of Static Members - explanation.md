# Inheritance and Name Hiding of Static Members
In the above code, we have a base class `Base` and a derived class `Derived`. Both classes have a static member `x` and static member functions `setX()` and `printX()`. The static member `x` in the derived class hides the static member `x` in the base class. This is known as name hiding.

In the `main()` function, we first access the static members through the base class and set `x` to 30. Then we print `x` through the base class, which prints "Base x: 30".

Next, we access the static members through the derived class and set `x` to 40. Then we print `x` through the derived class, which prints "Derived x: 40".

Finally, we access the hidden static member in the base class through the derived class and set `x` to 50. Then we print `x` through the base class, which prints "Base x: 50".

This demonstrates that the static member in the derived class hides the static member in the base class, but we can still access the hidden static member in the base class through the derived class by using the scope resolution operator `::`.