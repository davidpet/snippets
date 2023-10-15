# Variable Lifetime inc. Caveats

In the code, we have demonstrated the lifetime of different types of variables in C++.

1. **Global Variables**: These are declared outside all functions and are available throughout the program from the point of their declaration. In the code, `global` is a global variable. It is available in the `main` function and any other function we might have.

2. **Local Variables**: These are declared inside a function and are only available within that function. They are created when the function is called and destroyed when the function ends. In the code, `local` in `localVariable` function and `localMain` in `main` function are local variables.

3. **Static Local Variables**: These are also declared inside a function but they remain in existence even after the function ends. They are created when the function is called for the first time and only destroyed when the program ends. In the code, `staticLocal` in `staticLocalVariable` function is a static local variable. Notice how its value is retained between function calls.

The lifetime of a variable is an important concept in C++ as it determines when a variable is created and destroyed. Using variables outside their lifetime can lead to undefined behavior and bugs.