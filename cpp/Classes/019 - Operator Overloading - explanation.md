# Operator Overloading
In the above code, we have a `Complex` class that represents a complex number. We have overloaded the `+` operator to add two complex numbers and the `<<` operator to print a complex number.

The `+` operator is a member function of the `Complex` class and takes a constant reference to another `Complex` object. It adds the real and imaginary parts of the two complex numbers and returns a new `Complex` object.

The `<<` operator is a friend function of the `Complex` class and takes a reference to an `ostream` object and a constant reference to a `Complex` object. It prints the real and imaginary parts of the complex number and returns the `ostream` object.

In the `main` function, we create two `Complex` objects `c1` and `c2`, add them using the overloaded `+` operator, and print the result using the overloaded `<<` operator.

The output of the program should be `12+i9`, which is the sum of the complex numbers `10+i5` and `2+i4`.