## `alignof` and `alignas` in C++

C++11 introduced `alignof` and `alignas` to allow developers to inquire and specify the alignment of types, respectively.

### `alignof`

- **Purpose**: Returns the alignment requirement of a type.
- **Syntax**: `alignof(Type)`

### `alignas`

- **Purpose**: Specifies the alignment requirement for variables and types.
- **Syntax**: `alignas(alignment_value) Type variable_name;` or `alignas(Type) AnotherType;`

---

**Notes**:

1. `alignof` returns the alignment requirement of its operand type.
2. `alignas` can be used to align variables, data members, and class/struct types.
3. Over-aligning (specifying an alignment stricter than necessary) might increase memory consumption because of additional padding.
4. Under-aligning (specifying an alignment looser than necessary) might lead to a compilation error.

**Use Cases**:

- **High-performance computing**: Ensuring data is aligned to specific boundaries can result in performance improvements due to better cache utilization and vectorization opportunities.
- **Interfacing with hardware or specific APIs**: Some hardware or APIs might require data to be aligned in a particular way.

---
