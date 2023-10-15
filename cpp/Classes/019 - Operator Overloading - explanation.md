# Operator Overloading

Some operators are implemented as __members__ of the class while some are implemented as __friend functions__ of the class.

In the code, we have a `Complex` class that represents a complex number. We have overloaded the `+` operator to add two complex numbers and the `<<` operator to print a complex number.

The `+` operator is a member function of the `Complex` class and takes a constant reference to another `Complex` object. It adds the real and imaginary parts of the two complex numbers and returns a new `Complex` object.

The `<<` operator is a friend function of the `Complex` class and takes a reference to an `ostream` object and a constant reference to a `Complex` object. It prints the real and imaginary parts of the complex number and returns the `ostream` object.

In the `main` function, we create two `Complex` objects `c1` and `c2`, add them using the overloaded `+` operator, and print the result using the overloaded `<<` operator.

The output of the program should be `12+i9`, which is the sum of the complex numbers `10+i5` and `2+i4`.

Note: this snippet uses the style `operator + ()` but you could also do `operator+()`.
Note: you have some flexibility about defining const references vs. copies, etc. in the operators.  The compiler will figure it out based on what it sees when it encounters the operator on a class.

Note: the way we did `operator <<` here is kind of like adding an __extension method__ on `ostream`.
Note: you can overlaod operators as functions without having to define classes too (eg. if you want to make 2 existing classes with + behave differently).

There are a ton of operators you can overload, and many can be overloaded as either members or friends.  Here is a list of some interesting ones to point out:
   - __Assignment__: `MyClass& operator=(const MyClass& rhs);`
      - may want to also do the __compound assignments__ as appropriate (not automatic)
   - __Call__: `ReturnType operator()(ArgType1 arg1, ArgType2 arg2, ...);`
   - __Indexing__: `ValueType& operator[](KeyType key);`
   - __Arrow__: `PointerType* operator->();`
   - plus all the math, logic, etc. operators (extremely complete set)
   - conversion operators for casting are covered separately

Typically, the ones that involve other types that might be on the left or right would require friend functions instead of member functions.

Note: operators can also have __const overloading__ and stuff like that, just like any method.
