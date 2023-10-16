# Const Overloading

You can mark a __method__ as `const` to say that method is callable on a `const` variable, pointer, or reference of that type. It promises that whatever happens inside will not mutate the state of the object.  The compiler will actually enforce this on all __non-static__ members unless they are marked `mutable`.

This ends up being very important since you will often pass objects by constant reference to save extra copies, and thus the methods you can call on that object become very important.

In addition, __const overloading__ is when you have both a `const` and non-const version of the same method (differing only by that) - then the `const` one is used for a const object/pointer/reference, and the non-const one is used otherwise.  `const_cast` is a dangerous way to cast between const and non-const as needed (usually for legacy code that isn't quite const correct).

__Const correctness__ is the technique of applying `const` wherever possible in prototypes to promote immutability and readability.
