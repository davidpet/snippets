# Local Variables Declared in Conditionals

This snippet demonstrates two concepts:

1. You can declare a variable in an `if` condition - the value assigned to the variable is the one checked.
   - this is similar to what goes on in your typical `for` loop
   - allowed in `while` as well

1. C++ 20 introduced `if-init` which lets you check a condition other than the default of true for nonzero
   - the presence of `;` tells the compiler to check the condition
   - can use the variable in the loop without it having to have been zero or nonzero with the condition
