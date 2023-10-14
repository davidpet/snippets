# Range
In this code, we first declare a vector of integers. We then use a range-based for loop to iterate over each element in the vector. The syntax `for (int num : numbers)` means "for each integer `num` in the vector `numbers`". 

In the second loop, we use a reference (`int& num`) to modify the elements in the vector. This is because the range-based for loop creates a copy of each element in the range, so if we want to modify the original elements, we need to use a reference.

In the third loop, we use a constant reference (`const int& num`) to iterate over the elements. This is a good practice when we don't need to modify the elements, as it prevents accidental modification and can potentially improve performance by avoiding unnecessary copies.

The output of this program will be:

```
1
2
3
4
5
2
4
6
8
10
```

This demonstrates that the original elements in the vector were indeed modified by the second loop.