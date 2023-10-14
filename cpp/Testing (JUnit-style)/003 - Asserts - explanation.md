# Asserts
In the above code, we first include the Google Test library. Then we define a function `add` that we want to test. 

We then define two test cases using the `TEST` macro. The first argument to `TEST` is the test case name and the second argument is the test name. Inside the test cases, we use the `EXPECT_EQ` macro to assert that two values are equal. If they are not equal, the test will fail.

Finally, in the `main` function, we initialize Google Test and run all the tests. If all the assertions pass, the program will return 0. Otherwise, it will return 1.

There are several other assertion macros available in Google Test, such as `EXPECT_NE` (not equal), `EXPECT_LT` (less than), `EXPECT_LE` (less than or equal to), `EXPECT_GT` (greater than), `EXPECT_GE` (greater than or equal to), `EXPECT_TRUE`, and `EXPECT_FALSE`.

Note that Google Test needs to be installed and linked correctly in order to use it in your C++ projects.