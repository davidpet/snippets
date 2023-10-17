#include <gtest/gtest.h>

// A function that we will test
int add(int a, int b) {
    return a + b;
}

// A test case
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3); // This will pass
    EXPECT_EQ(add(10, 20), 30); // This will pass
    EXPECT_EQ(add(100, 200), 300); // This will pass
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -2), -3); // This will pass
    EXPECT_EQ(add(-10, -20), -30); // This will pass
    EXPECT_EQ(add(-100, -200), -300); // This will pass
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
