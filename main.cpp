#include "Rectangle.h"
#include "RatioCalculator.h"
#include "mock_Shape.h"

#include "gtest/gtest.h"
#include <iostream>

using ::testing::AtLeast;
using ::testing::Return;

TEST(RatioCalculatorTest, calculate)
{
    MockShape mockShape;
    RatioCalculator calc(mockShape);
    EXPECT_CALL(mockShape, circumfence()).Times(1).WillOnce(Return(200.0));
    EXPECT_CALL(mockShape, area()).Times(1).WillOnce(Return(400.0));
    ASSERT_EQ(calc.calculate(), 2.0);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}