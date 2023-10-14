# Access Modifiers
In the above code, we have defined a class `MyClass` with public, protected, and private access modifiers. The `publicVar` is a public member that can be accessed from anywhere. The `protectedVar` is a protected member that can be accessed within the same class or in a derived class. The `privateVar` is a private member that can only be accessed within the same class.

We have also defined a derived class `MyDerivedClass` to demonstrate the use of the protected access modifier. The `printProtectedVar` method in `MyDerivedClass` can access the `protectedVar` member of `MyClass` because `MyDerivedClass` is a derived class of `MyClass`.

In the `main` function, we create instances of `MyClass` and `MyDerivedClass` and demonstrate accessing the public and protected members. We also show that attempting to access the private members directly will cause a compile error.

This code demonstrates the use of public, protected, and private access modifiers in C++.