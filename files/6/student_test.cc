#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(Calculator, divideZero)
{
    float a = 1;
    float b = 0;
    float sum;
    float diff;
    float product;
    float ratio;
    ErrorCode e = Calculator(a,b,sum,diff,product,ratio);
    EXPECT_TRUE(e == ErrorCode::kDivideByZero);
}

TEST(Calculator, operations)
{
    float a = 1;
    float b = 2;
    float sum;
    float diff;
    float product;
    float ratio;
    ErrorCode e2 = Calculator(a,b,sum,diff,product,ratio);
    EXPECT_FLOAT_EQ(sum,3);
    EXPECT_FLOAT_EQ(diff,-1);
    EXPECT_FLOAT_EQ(product,2);
    EXPECT_FLOAT_EQ(ratio,0.5);
}

TEST(Calculator, smallNumber)
{
    float a = 1;
    float b = 0.001;
    float sum;
    float diff;
    float product;
    float ratio;
    ErrorCode e3 = Calculator(a,b,sum,diff,product,ratio);
    EXPECT_FLOAT_EQ(sum,1.001);
    EXPECT_FLOAT_EQ(diff,0.999);
    EXPECT_FLOAT_EQ(product,0.001);
    EXPECT_FLOAT_EQ(ratio,1000);
}