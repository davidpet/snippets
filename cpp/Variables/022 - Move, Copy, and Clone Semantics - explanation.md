# Move, Copy, and Clone Semantics

This code demonstrates the copy and move semantics in C++. The `MyClass` class has a single data member `data`. It has a default constructor, a parameterized constructor, a copy constructor, a move constructor, a copy assignment operator, and a move assignment operator. Each of these methods prints a message when it is called, which helps us understand when each one is used.

In the `main` function, we first create an object `obj1` using the parameterized constructor. Then we create `obj2` by copying `obj1`, which calls the copy constructor. We then create `obj3` by moving `obj1`, which calls the move constructor. After the move, `obj1`'s data is reset to 0.

Next, we create `obj4` using the default constructor and then assign `obj2` to it, which calls the copy assignment operator. We then create `obj5` using the default constructor and then move `obj3` to it, which calls the move assignment operator. After the move, `obj3`'s data is reset to 0.

The print statements show the value of `data` in each object after these operations.