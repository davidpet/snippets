# Operator Overloading
In the above code, we have a `Complex` class that represents a complex number. We have overloaded the '+' operator to add two complex numbers. The operator function takes a constant reference to a `Complex` object. Inside the function, we create a new `Complex` object and set its `real` and `imag` fields to be the sum of the `real` and `imag` fields of the current object and the input object. We then return this new object.

We have also overloaded the '<<' operator to print a `Complex` object in a specific format. This operator function is a friend function, which means it has access to the private and protected members of the `Complex` class. The function takes a reference to an `ostream` object and a constant reference to a `Complex` object. Inside the function, we insert the `real` and `imag` fields of the `Complex` object into the `ostream` object in a specific format, and then return the `ostream` object.

In the `main` function, we create two `Complex` objects `c1` and `c2`, and then use the overloaded '+' operator to add them together and assign the result to a new `Complex` object `c3`. We then use the overloaded '<<' operator to print `c3`.

The expected output of the program is:

```
12+i9
```

This is because the real part of `c3` is `10 + 2 = 12` and the imaginary part of `c3` is `5 + 4 = 9`.