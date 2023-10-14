# Serialization
This code demonstrates the serialization and deserialization of a `Person` struct in C++. The `Person` struct is defined with a `name` and `age` field, and the `<<` and `>>` operators are overloaded to allow for easy printing and reading of `Person` objects.

In the `main` function, a `Person` object `p1` is created and then serialized to a string using a `std::ostringstream`. This serialized string is then printed to the console.

The serialized string is then deserialized back into a `Person` object `p2` using a `std::istringstream`. This deserialized `Person` is then printed to the console.

The expected output of this program is:

```
Serialized Person: John 25
Deserialized Person: John 25
```

This demonstrates that the original `Person` object was successfully serialized to a string and then deserialized back into a `Person` object.