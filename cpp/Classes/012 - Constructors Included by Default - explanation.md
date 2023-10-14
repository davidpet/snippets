# Constructors Included by Default
In the above code, we have a class named 'Demo' with two private member variables 'x' and 'y'. We have defined four types of constructors:

1. Default Constructor: This is a constructor that takes no parameters, and it is included by default if no other constructors are defined. In this case, it initializes 'x' and 'y' to 0.

2. Parameterized Constructor: This is a constructor that takes parameters. In this case, it takes two integers and assigns them to 'x' and 'y' respectively.

3. Copy Constructor: This is a constructor that initializes an object using another object of the same class. In this case, it copies the values of 'x' and 'y' from the passed object to the new one.

4. Destructor: This is not a constructor, but it's worth mentioning here. It's a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.

In the 'main' function, we create three objects 'd1', 'd2', and 'd3'. 'd1' is created using the default constructor, 'd2' is created using the parameterized constructor, and 'd3' is created using the copy constructor. Each object's values are then displayed using the 'display' function.