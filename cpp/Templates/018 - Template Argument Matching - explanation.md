# Template Argument Matching

This is a type of pattern matching templates can do based on the syntax and functioning of how __template specializations__ actually work.

1. Each of the examples requires a __primary template__ which is the one where the class doesn't have `<>` to the right of it.  In these examples, we don't allow using the primary one directly, only the specializations, and this forward-declaration-like syntax is how you do that.  It tells the template engine what the specializations are going off of, but it is __not complete__ and will get a compile error if directly used.
1. Each specialization has a part in `<>` that looks like __how you'd use it__ and also looks like the __primary__ template, but for specific types you'd use it with.
1. Each specialization has its own template args which can be more, less, or the same number of args as the primary.  These args are combined in the args that go in `<>`.
1. Specifying names for the template args in the primary templates is optional (both ways shown here).

3 crucial examples are shown here:

1. pointers and references
1. array (including count)
1. function type

NOTE: when providing bodies outside the class for a specialization, you need to match the template part and the class part (both of the `<>`).
