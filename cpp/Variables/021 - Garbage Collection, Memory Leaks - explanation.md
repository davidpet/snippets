# Garbage Collection, Memory Leaks
In the above code, we first allocate memory for an integer on the heap using the `new` keyword. We then assign a value to the memory and print it. After we're done with the memory, we deallocate it using the `delete` keyword. This is how you should manage memory in C++.

Next, we allocate memory for an array of integers on the heap. We assign values to the array and print them. After we're done with the array, we deallocate it using `delete[]`.

Finally, we show an example of a memory leak. We allocate memory for an integer and assign a value to it. However, we forget to deallocate the memory. This causes a memory leak, which can lead to your program using more and more memory over time.

To avoid memory leaks, always remember to deallocate any memory you allocate. If you're dealing with more complex data structures, consider using smart pointers (such as `std::unique_ptr` or `std::shared_ptr`), which automatically deallocate memory when they go out of scope.