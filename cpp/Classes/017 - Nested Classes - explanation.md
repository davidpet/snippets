# Nested Classes
In the above code, we have demonstrated the concept of nested classes in C++. A nested class is a class that is declared within another class, known as the enclosing class. The nested class is a member of the enclosing class, and has the same access rights as any other member.

The nested class 'Inner' is defined within the class 'Outer'. It has a public member variable 'inner_var', and can be instantiated and used like any other class. The enclosing class 'Outer' also has a member function 'printInnerVar()' that creates an instance of 'Inner' and prints the value of 'inner_var'.

In the function 'printVars()', we create instances of both 'Outer' and 'Inner', and print the values of their member variables. Note that the nested class 'Inner' can be instantiated independently of the enclosing class 'Outer', and that it can be referred to using the scope resolution operator '::' as 'Outer::Inner'.

In the 'main()' function, we call 'printVars()' to print the values of 'outer_var' and 'inner_var', and then create an instance of 'Outer' and call 'printInnerVar()' to print the value of 'inner_var' again.

This demonstrates the basic usage of nested classes in C++. They can be useful for organizing related classes and for encapsulating classes within other classes to limit their scope and visibility.