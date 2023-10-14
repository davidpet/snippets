# Test Class/Suite and Methods
In the above code, we first include the Google Test library. Then we define a class `MyClass` that we want to test. 

We then define a test suite `MyClassTest` by inheriting from `::testing::Test`. In this test suite, we declare an instance of `MyClass` that we will use in our tests.

We then define two test methods `AddTest` and `AddTestNegative` using the `TEST_F` macro. In these methods, we use the `EXPECT_EQ` macro to assert that the `add` method of `MyClass` returns the expected results.

Finally, in the `main` function, we initialize Google Test and run all the tests.

To compile and run this code, you need to link against the Google Test library. You can do this by adding `-lgtest` to your g++ command line. For example:

```bash
g++ -o my_test my_test.cpp -lgtest
./my_test
```

This will run all the tests and print the results to the console. If all the tests pass, you will see something like this:

```
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from MyClassTest
[ RUN      ] MyClassTest.AddTest
[       OK ] MyClassTest.AddTest (0 ms)
[ RUN      ] MyClassTest.AddTestNegative
[       OK ] MyClassTest.AddTestNegative (0 ms)
[----------] 2 tests from MyClassTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.
```

This indicates that both tests passed. If a test fails, Google Test will print detailed information about the failure.