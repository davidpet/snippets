# Arrays

1. Underneath, an array is basically a pointer.
    - Note that when you take a pointer to an array, you assign the array variable itself, you don't take its address.
1. When you declare an array, the `[]` goes __after the variable__ instead of with the type, implying that it's an array because of the variable, not as the type of the variable.
1. You can either specify the size of leave it out, and you can initialize with `{}` if you want.  Any unspecified items will become zero.
1. You can only create an array of a custom class if it has a default constructor, unless you do it dynamically with placement new.
1. Multidimensional arrays just have multiple `[]` as you'd expect, and nested `{}` for initialization, but only the first dimension's size is allowed to be ommitted.
    - This corresponds with the behavior of __array decay__ in function arguments where only the first argument's size is lost and the rest must be provided.

NOTE: array decay is more of a "Functions" topic and will be covered more there.
