# Sorting (Default vs. Custom Comparator)
In this code, we first include the necessary headers. We then define a custom comparator function that takes two integers and returns true if the first is greater than the second. This will cause the sort function to sort in descending order when this comparator is used.

In the main function, we create a vector of integers and then use the default sort function to sort it in ascending order. We then print the sorted vector.

Next, we use the custom comparator function to sort the vector in descending order. We then print the sorted vector again to demonstrate the effect of the custom comparator.

The sort function in C++ is very flexible and can be used with any data type that has a defined less-than operator, or with a custom comparator function for more complex sorting requirements.