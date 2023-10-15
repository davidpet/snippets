# Conversion Operators

This code demonstrates the conversions for MyClass. Implicit conversions happen seamlessly without needing explicit casting. For the conversions that are marked explicit, you must use `static_cast` to perform the conversion explicitly.

Conversion __from__ another type to your type is done via constructors.

Conversion __to__ another type from your type is done via operators.

Either a constructor or operator can be marked `explicit` to prevent implicit conversion.

Implicit conversion will generally only go __1-level__ of user-defined conversions in order to make arguments match prototypes, separately from also widening numbers (before the user-defined conversion), etc. as needed.
