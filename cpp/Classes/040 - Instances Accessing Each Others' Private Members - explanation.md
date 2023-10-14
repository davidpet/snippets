# Instances Accessing Each Others' Private Members
In the above code, we have a class `MyClass` with a private member `privateVar`. We also have a public method `accessPrivateVar()` which takes another instance of the same class as an argument and accesses its private member `privateVar`.

In the `main()` function, we create two instances of `MyClass`, `instance1` and `instance2`, with `privateVar` initialized to 10 and 20 respectively. Then we use `accessPrivateVar()` method to access the private member of the other instance. 

This demonstrates that in C++, instances of the same class can access each other's private members. This is because in C++, the private members are not private to the instance, but private to the class. Therefore, all instances of the same class can access each other's private members.

Please note that this is not considered a good practice in object-oriented programming as it violates the principle of encapsulation. It's generally recommended to use public getter and setter methods to access and modify the private members of a class.