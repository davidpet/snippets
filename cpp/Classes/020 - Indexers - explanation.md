# Indexers
In the above code, we define a class `MyClass` that contains a private member `data` which is a vector of integers. We then overload the `operator[]` to provide array-like access to the `data` member. In the `main` function, we create an object of `MyClass` and use the overloaded `operator[]` to access and modify the elements of `data`. Finally, we print the elements to verify that the `operator[]` overloading works as expected.

It's important to note that the `operator[]` returns a reference to the element. This allows us to modify the actual element, not just a copy of it. If we returned by value instead of by reference, the `operator[]` would only provide read access to the elements, not write access.

Also, note that this example does not include any bounds checking. In a real-world application, you would want to add checks to ensure that the index is within the valid range of the vector.