# Enums (inc. most basic/minimal, numeric, string, and strongly-typed)

1. Enums in C++ are a way of creating a new type that can have one of a few predefined values. The basic enum in C++ automatically assigns integer values starting from 0 to its elements, in the order they are declared.

1. You can also assign explicit values to the elements of an enum. This is demonstrated with the `Color2` enum and `Planet` enum, where each planet is assigned its position in the solar system.

1. Basic enums are implicitly really of type `int` and are implicitly converted to `int`, but converting back requires a __cast__.  However, the cast doesn't know if the value is not part of the enum. Thus, this kind of enum is __not type safe__ which motivates the addition of strongly-typed enums in C++11.

1. Another problem with basic enums, is the values are __not scoped__, so values from different enums can __clash with each other and variables__.

1. C++11 introduced strongly-typed enums (also known as enum classes). These are not implicitly convertible to integers, and their elements are scoped within the enum. This is demonstrated with the `TrafficLight` enum. Trying to print a `TrafficLight` value directly would cause a compile error, because it's not implicitly convertible to an integer.

1. When you create a strongly-typed enum, you use the word `class`.  Optionally, you can also provide a backing type to change the storage to another __integer type__.  You can still provide values or not.

1. It's worth noting that basic enums are directly printable because of implicit conversion to integer while strongly typed enums have to be explicitly converted to integer to do that.

1. Enums are used by creating a variable of the enum type and assigning it one of the enum's values. This is demonstrated in the `main` function with the `Color`, `Planet`, and `TrafficLight` enums.

1. To compare or assign values from a strongly-typed enum, you need to use the scope resolution operator (`::`). This is demonstrated with the `TrafficLight` enum.

1. Strongly-typed enums are still backed by an integer type and you can still get values that are not one of the specified ones via casting.  It is __not as type safe as in Java__.

1. You can also make enums even weaker-typed by not giving them a name.  Then their values are scoped to their enclosing scope (eg. a `struct`) just like normal, and are basically integer compile-time constants.