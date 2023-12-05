# Delayed Iniitialization of Instance Members

In the code, we have a class `MyClass` with a constant member `constMember` and a variable member `varMember`. The constant member is initialized using a constructor initializer list or inline, which is the only way to initialize constant or reference members in C++. The variable member is initialized inside the constructor body, which is the usual way to initialize variable members.

In the `main` function, we create an instance of `MyClass` and print the values of the members. Then we try to modify the members. The modification of the constant member is commented out because it would cause a compile error. The modification of the variable member is allowed and changes the value of the member.

Finally, we print the values of the members again to show that the constant member has not changed and the variable member has changed.
