#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(checkSpaces,Empty)
{
    std::string Nothing = "";
    int None = CountNumberOfSpaces(Nothing);
    EXPECT_EQ(None,-1);
}

TEST(checkSpaces,NoSpace)
{
    std::string Zeppelin = "LedZeppelin";
    int None = CountNumberOfSpaces(Zeppelin);
    EXPECT_EQ(None,0);
}

TEST(checkSpaces,oneSpace)
{
    std::string Zeppelin2 = "Led Zeppelin";
    int One = CountNumberOfSpaces(Zeppelin2);
    EXPECT_EQ(One,1);
}

TEST(checkSpaces,severalSpaces)
{
    std::string Several = "There are seven spaces in this sentence. ";
    int Seven = CountNumberOfSpaces(Several);
    EXPECT_EQ(Seven,7);
}

TEST(checkSpaces,allSpaces)
{
    std::string allSpace = "          ";
    int Ten = CountNumberOfSpaces(allSpace);
    EXPECT_EQ(Ten,10);
}

TEST(checkSpaces,underscore_Space)
{
    std::string underscoreSpace = "_ ";
    int One = CountNumberOfSpaces(underscoreSpace);
    EXPECT_EQ(One,1);
}

TEST(checkSpaces,nullSpace)
{
    std::string nullSpace = "";
    int null = CountNumberOfSpaces(nullSpace);
    EXPECT_EQ(null,-1);
}