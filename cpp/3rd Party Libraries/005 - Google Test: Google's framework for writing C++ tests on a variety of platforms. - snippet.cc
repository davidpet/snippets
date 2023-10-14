Sure, here is a basic example of how to use Google Test for unit testing in C++. 

// Include the necessary headers for Google Test
#include "gtest/gtest.h"

// A simple function to test
int add(int a, int b) {
    return a + b;
}

// Define our test. The first argument is the test suite name, 
// and the second is the test name within that suite.
TEST(AdditionTest, HandlesPositiveInput) {
    // Use the ASSERT_EQ macro to check if the function returns the expected result.
    // If the assertion fails, the test will stop immediately.
    ASSERT_EQ(3, add(1, 2)); // This should print "All tests passed." if the function works correctly.
}

// The main function that runs all the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}