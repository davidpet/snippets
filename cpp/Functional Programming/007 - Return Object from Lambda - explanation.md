# Return Object from Lambda
1. In this code, we first define a class `MyClass` with a single member `value`. 

2. We then define a lambda function `returnObjectLambda` that takes an integer and returns an object of `MyClass` initialized with that integer. 

3. We use this lambda function to create an object `obj` of `MyClass` with the value `10`, and print the value of `obj`, which should be `10`.

4. We then define another lambda function `returnFunctionLambda` that takes an integer and returns a function. This returned function, when called, will return the original integer. 

5. We use this lambda function to create a function `func` that returns `20`, and print the result of calling `func`, which should be `20`.

6. This demonstrates how lambda functions in C++ can return objects and other functions.