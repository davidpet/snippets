# Nullability of Class Members
In the above code, we define a class `MyClass` with two nullable members: `nullableInt` and `nullableUniqueInt`. These members are pointers and can be assigned `nullptr`, which represents a null pointer in C++. 

In the `main` function, we create an instance of `MyClass` and check if the nullable members are null. Since they are initialized to `nullptr` in the constructor of `MyClass`, they are indeed null at this point.

We then assign values to these nullable members. For `nullableInt`, we use the `new` keyword to dynamically allocate an integer. For `nullableUniqueInt`, we use `std::make_unique` to create a `std::unique_ptr` that owns a new integer.

After assigning values, we check again if the nullable members are null. This time, they are not null, and we print their values.

Finally, we clean up the dynamically allocated integer by calling `delete` on `nullableInt`. Note that we don't need to manually delete `nullableUniqueInt` because `std::unique_ptr` automatically deletes the object it owns when it is destroyed.