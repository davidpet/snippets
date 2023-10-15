# Extension Methods

C++ does not support extension methods directly.  This snippet shows how to simulate it.

In this example, we've created a free function `endsWith` inside a namespace `StringExtensions`. This function acts like an extension method for `std::string`, allowing us to check if a string ends with a specific suffix. We can use this function as if it were a method of `std::string`, but we need to qualify it with the namespace name.

This is not exactly the same as extension methods in languages like C#, where you can call the method directly on the object as if it were a member method. However, it's a way to organize related functions in a way that's easy to understand and use.

Remember that this approach does not actually add methods to an existing class. It's simply a way to organize free functions that operate on objects of a certain type. The objects themselves are not modified, and no additional methods are added to their class definitions.