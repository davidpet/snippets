# Faking
In the above code, we first include the necessary headers for Google Test and Google Mock. Then we define a class `MyClass` with a virtual method `MyMethod` that we want to fake. 

We then define a fake class `FakeMyClass` that inherits from `MyClass`. In this class, we use the `MOCK_METHOD` macro to specify that we want to fake the `MyMethod` method. The `MOCK_METHOD` macro takes three arguments: the method name, the method signature, and the override specifier.

In the test `MyClassTest.MyMethodTest`, we create an instance of `FakeMyClass`. We then use the `EXPECT_CALL` macro to specify the behavior of the `MyMethod` when it is called with the argument `5`. In this case, we specify that it should be called once and return `10`.

Finally, we call `MyMethod` on the fake object and check the result using the `EXPECT_EQ` macro. If the result is as expected, the test will pass. If not, the test will fail and print a message indicating the expected and actual results.

This is a basic example of how to use Google Mock to create fake objects in C++. Google Mock provides many more features to control the behavior of fake objects and to verify that they are used as expected.