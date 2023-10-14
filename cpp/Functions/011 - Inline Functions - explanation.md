# Inline Functions
1. Inline functions are a useful feature in C++ that can help to increase the efficiency of your code. They are functions that are expanded in line when they are called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.

2. The `inline` keyword is used before the function name to make a function inline. The syntax is `inline return-type function-name(parameters) { // function code }`.

3. Inline functions can have default arguments. In the example above, the `multiply` function has a default argument of 2 for the second parameter.

4. Inline functions can also have reference arguments. In the example above, the `swap` function takes two reference arguments and swaps their values.

5. It's important to note that the compiler does not guarantee that an inline function will be inlined. The decision is made by the compiler based on various factors like the size of the function, the complexity of the function, etc. If the function is too complex, the compiler may decide not to inline it to avoid increasing the size of the binary.

6. Inline functions can improve the runtime performance of your program by eliminating the overhead of function calls. However, they can also increase the size of your binary, as the code for the function is duplicated at each point where the function is called. Therefore, it's best to use inline functions judiciously, and only for small, frequently called functions.