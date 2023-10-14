# Friend Classes
In the above code, we have two classes: `MyClass` and `MyFriendClass`. `MyClass` has a private member `privateVar`, which is not directly accessible outside the class. However, we have declared `MyFriendClass` as a friend of `MyClass` using the `friend` keyword. This allows `MyFriendClass` to access the private and protected members of `MyClass`.

In the `main` function, we create objects of both classes. We then use the `MyFriendClass` object to change and print the `privateVar` of the `MyClass` object. This demonstrates the primary use of friend classes in C++: to give another class access to the private and protected members of a class.

Note that the `friend` keyword can also be used to declare friend functions, which are allowed to access the private and protected members of the class. However, a friend function does not belong to any class, whereas a friend class has all its functions as friends of the class it befriends.