#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(correctSum, Zero)
{
    int zero = 0;
    int zeroInput = ClimbStairs(zero);
    EXPECT_EQ(zeroInput,0);
}
TEST(correctSum, Negative)
{
    int negative = -1;
    int negativeInput = ClimbStairs(negative);
    EXPECT_EQ(negativeInput,-1);
}
TEST(correctSum, Three)
{
    int given = 3;
    int paths = ClimbStairs(given);
    EXPECT_EQ(paths,4);
}
TEST(correctSum, Six)
{
    int six = 6;
    int pathsSix = ClimbStairs(six);
    EXPECT_EQ(pathsSix,24);
}

TEST(correctSum, Seven)
{
    int seven = 7;
    int pathsSeven = ClimbStairs(seven);
    EXPECT_EQ(pathsSeven, 44);
}

TEST(invalidEntry, FourtyFive)
{
    int fourtyFive = 45;
    int pathsfourtyFive = ClimbStairs(fourtyFive);
    EXPECT_EQ(pathsfourtyFive, -1);
}