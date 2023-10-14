# external vs. internal linkage
In the above code, we have two files: `main.cpp` and `external.cpp`. In `main.cpp`, we have a variable `internalVar` with internal linkage, which means it can only be accessed within the same file. We also have a function `printInternalVar` that prints the value of `internalVar`.

In `external.cpp`, we have a variable `externalVar` with external linkage, which means it can be accessed from other files. We also have a function `printExternalVar` that prints the value of `externalVar`.

In `main.cpp`, we include `external.h` and call both `printExternalVar` and `printInternalVar`. The former prints the value of `externalVar` from `external.cpp`, and the latter prints the value of `internalVar` from `main.cpp`.

This demonstrates the difference between external and internal linkage in C++. External linkage allows a name (variable or function) to be visible from other files, while internal linkage restricts the visibility to the same file.