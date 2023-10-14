# Immutable Types
In the above code, we define a class `ImmutableType` with two `const` data members: an `int` and a `std::vector<int>`. The `const` keyword makes these data members immutable, meaning they cannot be changed after they are initialized. We provide a constructor that initializes these data members.

In the `main` function, we create an instance of `ImmutableType` and print its data members. Since the data members are `const`, we cannot modify them after the object is created. This is how we can create our own immutable types in C++.

Note that the `std::vector<int>` is also `const`, which means we cannot add or remove elements from it after it is initialized. However, the elements of the vector themselves are not `const`, so they can be modified if we have a non-const reference to the vector. If we want the vector and its elements to be completely immutable, we would need to make it a `std::vector<const int>`, but this is not commonly done in C++.