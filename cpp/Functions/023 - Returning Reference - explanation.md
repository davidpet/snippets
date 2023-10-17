# Returning Reference

A function can return a reference, but if the reference points into the stack variables of the function or something else transient, it will have undefined behavior at runtime.  You should usuall only return by reference if it's something that you know will still be around.

For instance, `operator<<` usually returns `ostream` by reference because you had one to begin with and then you return the same one, allowing chaining multiple `<<` together.

Another example of the usefulness of returning by reference is the `[]` operator.  By returning a member by reference, you allow `a[i] = 3` syntax to work.  You can __const overload__ to return a __constant reference__ (or by value) to to prevent that on a const instance.
