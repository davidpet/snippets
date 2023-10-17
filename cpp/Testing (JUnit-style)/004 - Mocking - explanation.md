# Mocking

In this example, `Foo` is the interface for the class we want to mock. `MockFoo` is the mock class, which inherits from `Foo` and uses the `MOCK_METHOD` macro to specify that the `Bar` method should be mocked.

In the test case `FooTest.Bar`, we first create an instance of `MockFoo`. We then use the `EXPECT_CALL` macro to set up an expectation that the `Bar` method will be called once with the arguments 5 and 10, and that it will return 15.

We then call the `Bar` method on the mock object and print the result. If the `Bar` method is not called as expected, or if it is called with different arguments, the test will fail.

Google Mock provides a lot of flexibility in setting up expectations. For example, you can specify that a method should be called a certain number of times, or that it should be called with certain arguments. You can also specify what the method should return or do when it is called.
