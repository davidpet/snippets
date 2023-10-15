# Initializing Instance Values in Class Declarations

In the code, we have two classes: `Person` and `Employee`. In both classes, we are initializing instance variables directly in the class declaration. This is a feature introduced in C++11.

In the `Person` class, we have two instance variables: `name` and `age`, which are initialized to "John Doe" and 30, respectively. We also have a method `printDetails()` that prints the person's details.

The `Employee` class inherits from the `Person` class and adds two more instance variables: `jobTitle` and `salary`, which are initialized to "Software Engineer" and 50000.0, respectively. It also overrides the `printDetails()` method to include the job title and salary in the output.

In the `main()` function, we create instances of both classes and call their `printDetails()` methods. The output demonstrates that the instance variables are correctly initialized with the values specified in the class declarations.

Note the following exceptions:
1. The initialization expression does not have to be a compile-time constant (I think it used to).
1. The initialization is a __default value__ that can be __overridden by the constructor__ including in the initialization list.
1. Static members cannot be initialized this way, unless they're also constants.
