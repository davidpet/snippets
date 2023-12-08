# Ranges in C++20

Ranges introduce a new way of working with sequences in C++. Instead of standalone algorithms that operate on pairs of iterators, ranges provide composable algorithms that operate on _entire collections_.

### Key Concepts:

- **Range**: Any object that has a beginning and an end, such as arrays, `std::vector`, and most STL containers.
- **Views**: Lightweight range adaptors that present a modified view of some underlying data. They're lazy and don't own or modify the data they operate on.
- **Pipeline Syntax**: A chain of operations where the output of one operation is the input of the next.

### Advantages:

1. **Readability**: Pipelined operations can be more intuitive and closer to the problem's description.
2. **Efficiency**: Since views are lazy, they don't do any work until their results are required.
3. **Flexibility**: It's easy to compose multiple operations to create powerful data transformations.

**Output:**
```
1 9 25 49 81 
```

---

Ranges in C++20 provide a new paradigm for data manipulation in the language. With a wide array of views and adaptors, developers can express complex data transformations with elegance and efficiency.

`std::views` provides a set of range adaptors that modify and transform ranges in various ways. Here's a list of some essential members of `std::views` you might find useful:

---

### Essential Members of `std::views`

- **all**  
    Presents a whole range as a view, especially useful to make a simple container compatible with a view.
    ```cpp
    std::vector<int> vec = {1, 2, 3, 4};
    auto v = std::views::all(vec);
    ```

- **filter**  
    Filters the elements of a range based on a predicate.
    ```cpp
    auto evens = vec | std::views::filter([](int n) { return n % 2 == 0; });
    ```

- **transform**  
    Applies a transformation function to each element of a range.
    ```cpp
    auto squares = vec | std::views::transform([](int n) { return n * n; });
    ```

- **take**  
    Limits the range to the first N elements.
    ```cpp
    auto firstThree = vec | std::views::take(3);
    ```

- **drop**  
    Skips the first N elements of the range.
    ```cpp
    auto withoutFirstThree = vec | std::views::drop(3);
    ```

- **reverse**  
    Presents the range in reverse order.
    ```cpp
    auto reversed = vec | std::views::reverse;
    ```

- **split**  
    Splits the range wherever a given value appears.
    ```cpp
    std::string s = "a,b,c,d";
    auto splitView = s | std::views::split(',');
    ```

- **join**  
    Joins a range of ranges.
    ```cpp
    std::vector<std::vector<int>> vecOfVec = {{1, 2}, {3, 4}, {5, 6}};
    auto joined = vecOfVec | std::views::join;
    ```

- **keys** and **values**  
    Used with ranges of pairs (like the items in a map). `keys` provides a view of all the first elements, and `values` provides a view of all the second elements.
    ```cpp
    std::map<int, char> map = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
    auto keyView = map | std::views::keys;
    auto valueView = map | std::views::values;
    ```

- **std::ranges::zip_view**
    For zipping multiple ranges together.

- **iota**
    `std::views::iota(a, b)` will create a range from a to b (exclusive) with step 1.  To get other steps, you need to use other views such as `std::views::transform` to transform it.

---

`std::views` provides many other adaptors and utilities for working with ranges. These are just some of the most commonly used ones. By combining these views, you can build powerful and efficient data manipulation pipelines.

Note: to convert back to a regular collection, treat it like an __iterable__ and pass to a constructor of a collection.
