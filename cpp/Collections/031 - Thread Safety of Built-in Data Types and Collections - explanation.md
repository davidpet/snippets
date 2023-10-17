# Thread Safety of Built-in Data Types and Collections

In this code snippet, we are demonstrating the thread safety of built-in data types and collections in C++. We are using a vector as our collection and a mutex to ensure thread safety.

The `add_to_vector` function adds an element to the vector. Before accessing the vector, it locks the mutex to ensure that no other thread can access the vector at the same time. After it's done, it unlocks the mutex.

The `print_vector` function prints the elements of the vector. It also locks the mutex before accessing the vector and unlocks it afterwards.

In the `main` function, we create multiple threads that add elements to the vector. We then wait for all threads to finish before printing the vector.

This code demonstrates the basic usage of a mutex to ensure thread safety when accessing a shared resource (in this case, a vector) from multiple threads. It's important to note that the order in which the elements are added to the vector depends on the scheduling of the threads, which is not under our control. Therefore, the output might not always be "1 2 3". It could be any permutation of these numbers, depending on the order in which the threads run.

Note: no built-in collections are thread-safe by default, and there aren't thread-safe equivalents.
