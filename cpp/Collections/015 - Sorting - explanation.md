# Sorting
1. The `std::sort` function is used to sort a collection in ascending order. It takes two iterators, the beginning and the end of the sequence to be sorted. It can be used with collections that support random access, like vectors and arrays.

2. The `std::list::sort` function is used to sort a list. Lists do not support random access, so they have their own sort function.

3. To sort in descending order, we can pass a third argument to `std::sort`: a binary function that accepts two elements in the collection and returns true if the first element should go after the second. In this case, we use `std::greater`, which is a predefined function in the standard library.

4. The `printCollection` function is a template function that can print any collection. It uses iterators to traverse the collection from the beginning to the end.

5. Note that the `std::sort` function sorts the collection in-place, i.e., it modifies the original collection. If you want to keep the original collection unchanged, you need to make a copy before sorting.