# References and Mutability
In the above code, we first declare an integer variable `x` and a reference `ref` to it. We then print both `x` and `ref`, showing that they have the same value. 

Next, we change the value of `x` and print both `x` and `ref` again, demonstrating that when the original variable changes, the reference reflects this change. 

We then change the value of `ref` and print both `x` and `ref`, showing that when the reference changes, the original variable also changes. This demonstrates the mutability of references in C++. 

Finally, we declare a constant integer `y` and a reference `cref` to it. We print both `y` and `cref`, showing that they have the same value. We then attempt to change the value of `cref`, which results in a compile error, demonstrating that references to constants are not mutable.