# Enums (inc. most basic/minimal, numeric, string, and strongly-typed)
1. Enums in C++ are a way of creating a new type that can have one of a few predefined values. The basic enum in C++ automatically assigns integer values starting from 0 to its elements, in the order they are declared.

2. You can also assign explicit values to the elements of an enum. This is demonstrated with the `Planet` enum, where each planet is assigned its position in the solar system.

3. C++11 introduced strongly-typed enums (also known as enum classes). These are not implicitly convertible to integers, and their elements are scoped within the enum. This is demonstrated with the `TrafficLight` enum. Trying to print a `TrafficLight` value directly would cause a compile error, because it's not implicitly convertible to an integer.

4. Enums are used by creating a variable of the enum type and assigning it one of the enum's values. This is demonstrated in the `main` function with the `Color`, `Planet`, and `TrafficLight` enums.

5. To compare or assign values from a strongly-typed enum, you need to use the scope resolution operator (`::`). This is demonstrated with the `TrafficLight` enum.

6. To print the underlying integer value of an enum or enum class, you can use a static cast to `int`. This is demonstrated with the `Planet` enum.