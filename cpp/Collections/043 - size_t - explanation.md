# size_t

`size_t` is a __typedef__ value that is technically system-dependent.  On 64-bit systems, it will typically be `unsigned long long`. It's meant to represent the range of possible sizes within the address space of the system.

It is defined in __several headers__ in the standard library and used extensively within the standard library containers and algorithms.

Sometimes it is seen as `size_type` instead, such as within collection types as typedefs.

```C++
for (size_t i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << std::endl;
}
```
