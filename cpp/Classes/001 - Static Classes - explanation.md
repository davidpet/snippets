# Static Classes
In C++, there's no such thing as a "static class" like in some other languages such as C# or Java. However, you can create a class that only has static members. Static members belong to the class itself, rather than to individual objects of the class. This means you can access them without creating an instance of the class.

In the code above, we have a class `StaticClass` with a static member variable `staticVar` and a static member function `staticFunction()`. We initialize `staticVar` outside the class, because static member variables are not part of the individual objects. 

In the `main()` function, we access the static member variable and function using the class name followed by the scope resolution operator `::`. We don't need to create an instance of `StaticClass` to do this.

Remember that static member variables share their value among all instances of the class. If you change the value of a static variable, the new value is reflected in all instances of the class. In this case, since we don't have any instances of `StaticClass`, this point is moot, but it's important to keep in mind when working with static members in non-static classes.