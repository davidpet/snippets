# Statefulness of Imported Packages

In C++, if you want to share state between different files, you can use __global variables__. However, this is generally considered bad practice, as it can make your code harder to understand and debug. A better approach is to use classes or structs to encapsulate state, and pass instances of these classes or structs between different parts of your program.
