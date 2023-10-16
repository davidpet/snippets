# Closures

In the code, we have two closures: `value_capture` and `ref_capture`. The `value_capture` closure captures `x` and `y` by value, meaning it takes a copy of their current values at the point of its creation. The `ref_capture` closure captures `x` and `y` by reference, meaning it refers directly to the original variables.

When we first call `value_capture()` and `ref_capture()`, they both print the initial values of `x` and `y` (10 and 20, respectively). 

After we modify `x` and `y` to 30 and 40, calling `value_capture()` again still prints the original values (10 and 20), because it captured a copy of the values. However, calling `ref_capture()` now prints the new values (30 and 40), because it refers directly to the original variables and thus sees their updated values. 

This demonstrates the difference between value and reference captures in C++ closures.

Note: be careful capturing by __reference__ - it doesn't work like in other languages.  If the reference becomes __dangling__, you'll get unexpected behavior.

Hint: you can capture `this` as well.

In addition to explicitly specifying for each name used from the enclosing scope, you can specify defaults with `[=]` or `[&]` so that you don't have to name every single variable captured.
