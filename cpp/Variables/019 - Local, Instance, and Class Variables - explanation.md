# Local, Instance, and Class Variables

In this code snippet, we are demonstrating the use of local, instance, and class variables in C++. 

A local variable is a variable that is declared within a function or a block of code. It is only accessible within the function or the block where it is declared.

An instance variable is a variable that is declared within a class but outside any method. Each object of the class has its own copy of the instance variable.

A class variable, also known as a static variable, is a variable that is declared within a class with the static keyword. It is shared by all objects of the class, meaning if one object changes the value of the class variable, it will affect all other objects of the class.

In the main function, we create two objects of MyClass, obj1 and obj2. We then access and modify the instance variable and class variable through obj1. When we print the class variable of obj2, it shows the updated value, demonstrating that class variables are shared by all objects of the class. Finally, we call the func method of obj1 to print the local variable.