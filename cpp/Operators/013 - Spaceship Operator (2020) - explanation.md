# Spaceship Operator (2020)

Let's delve into the "spaceship" operator (`<=>`), also known as the three-way comparison operator introduced in C++20.

---

## **Spaceship Operator (`<=>`)**

### **Introduction**
The spaceship operator, represented as `<=>`, provides a consistent way to implement all six comparison operators (`==`, `!=`, `<`, `<=`, `>`, `>=`) using a single operator. It returns one of three possible values: negative, zero, or positive, which respectively indicates less than, equal to, or greater than.

### **Benefits**
1. **Consistency**: With the spaceship operator, it's easier to ensure that different comparison operations are consistent with each other.
2. **Code Reduction**: Reduces boilerplate by generating all six comparison operators from a single function.
3. **Performance**: Potentially more efficient since only a single comparison might be needed instead of multiple ones.

### **Return Types**
The return type can be (from `<compare>` header):
1. `std::strong_ordering`: Indicates strong ordering (`<`, `==`, `>`).
2. `std::weak_ordering`: Indicates weak ordering (like floating-point comparisons where NaNs are involved).
3. `std::partial_ordering`: Indicates partial ordering.
4. `std::strong_equality` or `std::weak_equality`: Used for equality comparisons.

### **Defaulted Spaceship Operator**
For user-defined types, if you set the spaceship operator to `default`, the compiler can generate a default one if all members of the type are themselves three-way comparable.  If you default `operator==` and `operator!=` it will try to generate that based on spaceship as well.  The reverse may also be true.

In the example above, the spaceship operator is defined for a `Point` class. It first compares the `x` coordinates, and if they are equal, it then compares the `y` coordinates.

---

The spaceship operator simplifies the process of making user-defined types orderable and comparable. It's a welcome addition in C++20, making code cleaner and less error-prone.

NOTE: you still have to define the other operators (such as `operator<`) using the spaceship operator to make them work, but it provides a common place for the real logic to go.

NOTE: some docs (and inconsistently ChatGPT) also indicate that `operator==` works even without the spaceship operator if you default it.

NOTE: In general, if you want to know more about this topic, don't ask ChatGPT.  It's super inconsistent - I think it saw too many committee proposals in different states or something.
