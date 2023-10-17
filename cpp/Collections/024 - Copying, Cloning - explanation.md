# Copying/Cloning

In this code, we demonstrate four different ways to copy or clone a collection in C++. 

1. The first method uses the copy constructor. This is a special constructor of a class (in this case, `std::vector`) that is used to create a new object as a copy of an existing object.

2. The second method uses the assignment operator. This operator is used to copy all elements from one vector to another. Note that the destination vector does not need to be empty before the operation.

3. The third method uses the `assign` function. This function replaces all elements in the destination vector with the elements from the source vector.

4. The fourth method uses the `std::copy` function from the `<algorithm>` library. This function copies the elements from the source range to the destination range. Note that the destination range must be large enough to hold the copied elements.

Each of these methods has its own use cases and can be used depending on the specific requirements of your program.
