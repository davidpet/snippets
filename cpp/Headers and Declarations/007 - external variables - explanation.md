# external variables
In the above code, we have three files: `main.cpp`, `externalVar.h`, and `externalVar.cpp`. 

In `main.cpp`, we define an external variable `myVar` and print its initial value. Then we call a function `modifyVar()` that modifies this external variable, and print its value again.

In `externalVar.h`, we declare the external variable `myVar` and the function `modifyVar()`. The `extern` keyword is used to declare a variable that is defined in another file.

In `externalVar.cpp`, we implement the function `modifyVar()` that modifies the external variable `myVar`.

The output of the program demonstrates that the external variable `myVar` is accessible and modifiable from different files, which is the main purpose of external variables.