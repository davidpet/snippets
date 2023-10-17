## Placement `new`

Placement `new` is a variant of the `new` operator in C++ that allows objects to be constructed at a specific memory location. This can be useful in scenarios where you want to control the exact location of memory allocation or avoid heap allocations altogether.

The primary advantage of placement `new` is that it doesn't actually allocate memory — it just constructs an object in the already allocated memory.

### Syntax

```cpp
new (address) Type (constructor arguments...);
```

### Example

Let's look at a simple example where we allocate a block of memory using `std::aligned_storage` and then construct an object at that memory location using placement `new`.

In the example, `std::aligned_storage` is used to create an appropriately aligned block of memory for `MyStruct`. Then, placement `new` constructs a `MyStruct` object at that location. Remember to manually call the destructor when done, as placement `new` won't do this for you.

**Caution**: Using placement `new` requires careful management of the object's lifecycle. The memory must be properly aligned for the type being constructed, and it's essential to ensure the object's destructor is called explicitly when the object is no longer needed. Otherwise, resources might leak or other undefined behavior may occur.
