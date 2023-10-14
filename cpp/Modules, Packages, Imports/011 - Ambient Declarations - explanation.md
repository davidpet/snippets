# Ambient Declarations
In this example, we have two classes, A and B. Class A has a member function `UseB` that needs to call a function on an instance of class B. However, when we define class A, class B has not been fully defined yet. To solve this problem, we can use a forward declaration of class B. This tells the compiler that B is a class, but does not provide any details about it. Then, we can define class B and finally define the `UseB` function of class A.

This is a simple example, but in a larger codebase with many interdependent classes, forward declarations can be very useful to manage dependencies and reduce compile times. They can also be used with functions and other identifiers, not just classes.

Note that forward declarations have some limitations. For example, you cannot use them to declare members of a class or to define a function that takes a parameter of the forward-declared type (unless it's a pointer or a reference). Also, if the full definition of the class is not available at the point where it's used, you can only declare pointers or references to it, not objects of that class.