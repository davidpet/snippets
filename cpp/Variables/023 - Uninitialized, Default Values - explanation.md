# Uninitialized/Default Values

In C++, uninitialized variables have a default value depending on their storage duration:

- Static and global variables are automatically initialized to zero.
- Local and instance variables are not initialized, and will contain garbage values.

In the code, we declare and initialize variables in different contexts (global, local, instance, and static) to demonstrate this behavior. We then print the values of these variables. For the uninitialized variables, we expect to see zero for static and global variables, and a garbage value for local and instance variables. For the initialized variables, we expect to see the value with which they were initialized.

Note: Another pecularity demonstrated here is that static class variables must be defined outside the class to exist or the linker will fail.
