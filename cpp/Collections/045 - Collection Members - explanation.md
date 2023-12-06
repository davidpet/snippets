# Collection Members

The purpose of this document is to give a list of members of the main collection types that is more extensive than the snippets above but not overly extensive (not repeating the whole documentation at cppreference.com).

It is manually created instead of using ChatGPT's help because it's a way to get re-acquinted with the C++ collections instead of passively reviewing it.

## Common

These are members all the collections have in common:

- __Allocator__
  - all the main collections take an allocator as a __template argument__ with a default value of `std::allocator`
  - they also have various members like `allocator_type` and `get_allocator()` to get info about it
  - this is there in case you want to take control of how storage is allocated for advanced use cases

- __Typedefs__
  - Element Type
    - value_type = depends on the collection
    - reference = value_type&
    - const_reference = const value_type&
    - pointer = value_type*
    - const_pointer = const value_type*
  - Iterator Info
    - size_type = size_t
    - difference_type = std::ptrdiff_t (signed)
  - Iterators
    - iterator (over elements of value_type)
    - reverse_iterator
    - const_iterator (cannot change elements)
    - const_reverse_iterator

- __Iterating__
  - `begin()` and `end()`
  - `cbegin()` and `cend()` for const
  - `rbegin()` and `rend()` for reverse
  - `crbegin()` and `crend()` for const reverse
  
- __Sizing__
  - `empty()`
  - `size()`

- __Modification__
  - `clear()`
  -  `insert()` = to insert one or more values before a given __iterator__ position (not index)
     - overloads for single value, iterators from container, and std::initializer_list
  - `emplace()` = like `insert()` but args after position iterator are __forwarded to element constructor__ (via variadic template)
     - often seen as `emplace_back()` and similar
  - `erase()` = remove one or more elements via single or two iterators (not values)
  - `swap()` = swap storage with another vectory (cheaply)
    - iterators remain valid but stay with their original data

## Vector

A magically growing array.

- __Template Args__
  - T, the element type
  - allocator (optional)

- __Specializations__
  - `bool` (to make more compact)

- __Typedefs__
  - all as described in __Common__ above
  - __value_type__ = T (the element type arg)

- __Constructors__
  - default
  - count, count+value
  - begin & end iterator (to copy from)
  - copy (of vector)
  - move (from vector)
  - std::initializer_list

- __Assignment Operator__
  - copy vector
  - move vector
  - std::initializer_list

- __assign()__
  - replaces contents with values given
  - overloaded for:
    - count & value
    - beg & end iterator
    - std::initializer_list

- __Elements__
  - `[]` = by reference (or const reference) with __no bounds checking__
  - `at(index)` = by reference __with bounds checking__ (`std::out_of_range` thrown)
  - `front()` and `back()` = references to first and last element
  - `data()` = the underlying array
    - keep in mind it will be stale if the vector is modified and has to reallocate
  
- __Capacity__
  - `capacity()` and `reserve()`
  - `shrink_to_fit()` = try to reduce capacity to match size

- __Modification__
  - all items from __Common__
  - `push_back()` and `pop_back()` (which returns `void`) to treat end like a __stack__
  - `insert()` = besides common overloads, also has overload for count of values to insert (duplicates)
  - `emplace_back()` = like `push_back()` but forwards args to constructor like `emplace()`
  - `resize()` = resize the container
    - __truncates__ if shrinking
    - optional overload to provide values if growing

- __Comparison Operators__
  - __lexographical__ comparison of elements using member-wise comparison operators

- __Non-Members__
  - `std::swap` specialized to take __two vectors__ and swap their storage cheaply
  - `std::erase` specialized to take vector as first arg
    - 2nd arg is a value
  - `std::erase_if` specialized to take vector as first arg
    - 2nd arg is a predicate

## Map

Ordered key-value dictionary.  Note that it doesn't use hashing because it sorts in a binary search tree instead.

HINT: don't forget about __structured binding declarations__ when dealing with pairs!

- __Template Args__
  - Key = the key type
  - T = the value type
  - Compare (optional, defaults to `std::less`)
  - allocator (optional)

- __Typedefs__
  - key_type = Key
  - mapped_type = T
  - value_type = std::pair<const Key, T>
  - key_compaer = Compare
  - all others are as you'd expect from __Common__, but just remember that value_type is the __key-value pair__

- __Constructor__
  - default
  - compare
  - begin & end iterator of pairs (with and without compare)
  - copy (of map)
  - move (from map)
  - std::initializer_list of pairs (with and without compare)
  - NOTE: if you don't provide a Compare instance, it will default construct it (`Compare()`)

- __Assignment Operator__
  - copy map
  - move map
  - std::initializer_list

- __Elements__
  - `at(key)` to get value with bounds checking (`std::out_of_range`)
  - `[key]` without bounds checking
    - actually __inserts it__ if not there
    - no `const` overload (unlike `at`)
  - NOTE: you get values __by reference__ which means they can be modified

- __Iterating__
  - same as __Common__, but iterating over __pairs__ with __mutable values__ but immutable keys

- __Modification__
  - all items from __Common__ but dealing with `std::pair` of key-value, and new pairs going to appropriate spot instead of end
  - `insert()` will refuse to insert if the key already exists
    - return value of `insert()` is the pair that's in there afterward (either yours or the already existing one)
  - `insert_or_assign(key, value)` to either insert or replace the value for a key
  - `try_emplace()` is like `emplace()` but will do nothing if the key is already there
    - actually `emplace()` does that too - not clear what's different (look later)
  - `extract()` to extract pairs out of the map (remove and return)
  - `merge()` to merge another map into this one

- __Lookup__
  - `count(key)` = 0 or 1
  - `find(key)` = iterator to pair (`end()` if not found)
  - `contains(key)` = boolean
  - `lower_bound(key)` = iterator to first pair where key is not less than
  - `upper_bound(key)` = iterator to first pair where key greater than
  - `equal_range(key)` = pair of iterators, `lower_bound()` and `upper_bound()`

- __Comparison Operators__
  - __lexographical__ comparison of __pairs__, which lexographically compare __key and value__ within

- __Non_Members__
  - `std::swap` specialized to take __two maps__ and swap their storage cheaply
  - `std::erase_if` specialized to take map as first arg
    - 2nd arg is a predicate on pairs

## Unordered Map

Unordered key-value dictionary (hash table).  It doesn't need to know ordering, but it needs to know hash and equality of keys.

- __Template Args__
  - Key = the key type
  - T = the value type
  - Hash (optional) = type of hash function (default to `std::hash`)
  - KeyEqual (optional) = type of key comparison (default to `std::equal_to`)
  - allocator (optional)

- __Typedefs__
  - look exactly like `std::map` (dealing with pairs, etc.)

- __Constructor__
  - default
  - bucket count (similar to picking vector capacity)
  - bucket count and hasher and key_equal (defaults to Hash() and KeyEqual())
  - pair of begin/end iterators with all the above
  - copy (of unordered_map)
  - move (from unordered_map)
  - std::initializer_list of pairs (with all the various combos above)

- __Assignment Operator__
  - copy unordered_map
  - move unordered_map
  - std::initializer_list

- __Iterating__
  - just like `std::map` except __no reverse iterators__ because no order in the first place
  - WARNING: order is not guaranteed to be consistent between iterations because the hash table structure can change at any time

- __Elements__, __Lookup__, and __Modifications__
  - look exactly __like Map__ with the understanding that there is no intrinsic order

- __Buckets and Hashing__
  - if needed, you can get info and perform operations directly related to the hashing behavior
  - eg. load factor, get a specific bucket, etc.

- __Comparison Operators__
  - only supports `==` and `!=` since not ordered

- __Non_Members__
  - `std::swap` specialized to take __two unordered maps__ and swap their storage cheaply
  - `std::erase_if` specialized to take unordered map as first arg
    - 2nd arg is a predicate on pairs

## Set and Unordered Set

Sets of unique values.  Ordered version is binary search tree and unordered version is hash set.

They look a lot like `map` and `unordered_map` except for these differences:
  - value_type is the element type (like in a vector) instead of a pair
  - no indexer or `at` because nothing to index (no position like vector and no key like map)

In addition, you can use `std::set_union`, `std::set_intersection`, and `std::set_difference` from the `<algorithm>` header, but only on `std::set` (not no `std::unordered_set`).  You have to do it yourself for unodered because the algorithms are implemented using assumptions of ordering to efficiently detect overlaps.

## Multimap, Multiset, Unordered Multimap, Unordered Multiset

These behave like their single counterparts, but there can be multiple entries with the same key.  They are not organized in any kind of sublist or anything but rather just exist duplicitavely.

Methods that rely on uniqueness, such as indexers, don't exist.

Methods like `equal_range()` that seem strange in the single versions make a lot more sense here.

There are some extra conveniences like `eraser()` overloads that erase all occurences of a key.

## Strings

`std::string` is a typedef for `std::basic_string<char>`.

`std::wstring` is a typedef for `std::basic_string<wchar_t>`.

Here are some of the members:

- __Typedefs__
  - looks a lot __like vector__
  - also `traits_type` to get character traits

_ __Constructors__
  - sooooo many!
  - c-style and c++ style strings, counts, etc.
  - supposed to have literal `"hello"s` to avoid copying a c-style string, but doesn't work in clang or VSCode

- __Assignment__
  - similar options to constructor but no counts because impossible to specify that in an operator
  - also `assign()` method like vector

- __Elements__
  - just like vector, except has both `data()` (for array that may not be null terminated) and `c_str()`
    - `c_str()` is probably a null-terminated copy - you're not allowed to modify it
  - has conversion operator to `basic_string_view`

- __Iteration__
  - just like vector

- __Size and Capacity__
  - exactly like vector
  - 1 additional method: `length()` which is a synonym for `size()`

- __Modifications__
  - has all the usual stuff __from vector__ plus more
  - `insert()` has a lot of overloads for different ways to add other strings in the middle of this string
  - `erase()` for removing 1 or more occurences of characters
  - `append()` for appending a whole string (instead of just a character like `push_back()`)
    - also `operator+=` and `operator+`
  - `compare()`
  - `starts_with()`, `ends_with()`
  - `replace()`
  - `substr()` get a new copy of a substring within the string
  - `copy()` copies into a C-style string array (does not null-terminate!)

  - __Searching__
    - `string::npos` is the past the end or not found value (-1)
    - search functions look for substrings or single chars and return __indices__ (not iterators)
    - `find()`, `rfind()`, `find_first_of()`, `find_last_of()`, `find_first_not_of()`, `find_last_not_of()`

- __Comparison Operators__
  - __lexographical__ comparison of character sequence

- __Non-Members__
  - `std::swap` specialized to take __two vectors__ and swap their storage cheaply
  - `std::erase` specialized to take string as first arg
    - 2nd arg is a char
  - `std::erase_if` specialized to take string as first arg
    - 2nd arg is a predicate

- __Conversions__
  - `stoi()`, `stoll()`, `stof()`, etc. to convert value inside to a number
    - throws `std::invalid_argument` if conversion fails
  - `std::to_string()` to convert a number to `std::string`
    - `std::to_wstring()` also

- __Other Operations Not In Here__
  - to reverse a string, use `std::reverse(s.begin(), s.end());`
  - to convert between uppercase and lowercase, use `std::transform` with `std::tolower()` and `std::toupper()` (from `<cctype>`)
  - case insensitive comparison is not directly supported - you'd have to do your own transformations and/or comparisons

NOTE: methods of container objects (eg. `insert`) are able to reallocate to accomodate new items.  This is different from the `<algorithm>` functions which have iterators rather than containers and thus cannot do that.
