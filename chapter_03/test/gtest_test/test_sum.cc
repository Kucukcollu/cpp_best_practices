#include <gtest/gtest.h>

#include "custom_math_lib.hpp"

TEST(SumTest, TwoInt)
{
    EXPECT_EQ(14, custom_math_lib::sum(6,8));
}