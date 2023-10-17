# Multimap and Multiset

### `std::multiset`

`std::multiset` is similar to `std::set`, but it can contain multiple instances of the same element.

### `std::multimap`

`std::multimap` is like `std::map`, but one key can be associated with multiple values.

The main distinguishing feature of `std::multiset` and `std::multimap` from their non-multi counterparts is that they allow for multiple entries with equivalent keys. This can be especially useful when you want to keep all occurrences in scenarios like databases or logs where duplicates are meaningful.

Note: both are __ordered collections__ by default.  You can use `std::unordered_multimap` and `std::unordered_multiset` if you want unordered.

Note: there is __no indexer__ for these.  You can use `equal_range` to find all entires with the same key.
