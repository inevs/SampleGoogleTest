#include <gtest/gtest.h>
#include <MyMath.h>

class MyMathTest : public :: testing::Test {
};

TEST_F(MyMathTest, SummsValuesUp) {
    MyMath math;
    int sum = math.addNumbers(2, 3);
    EXPECT_EQ(5, sum);
}