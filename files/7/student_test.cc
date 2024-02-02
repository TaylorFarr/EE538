#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(passingCases, diffInput)
{
    std::string same = "same";
    std::string diff = "different";
    bool testDiff = CanBecome(same,diff);
    EXPECT_EQ(testDiff,false);
}

TEST(passingCases, sameInput)
{
    std::string same = "same";
    bool testSame = CanBecome(same,same);
    EXPECT_EQ(testSame,true);
}

TEST(passingCases, olagInput)
{
    std::string s1 = "oalg";
    std::string g1 = "goal";
    bool oneShift = CanBecome(s1,g1);
    EXPECT_EQ(oneShift,true);
}

TEST(passingCases, lgoaInput)
{
    std::string s2 = "lgoa";
    std::string g2 = "goal";
    bool oneShift1 = CanBecome(s2,g2);
    EXPECT_EQ(oneShift1,true);
}

TEST(passingCases, algoInput)
{
    std::string s3 = "algo";
    std::string g3 = "goal";
    bool oneShift2 = CanBecome(s3,g3);
    EXPECT_EQ(oneShift2,true);
}

TEST(passingCases, antiInput)
{
    std::string s5 = "antidisestablishmentarianism";
    std::string g5 = "hmentarianismantidisestablis";
    bool oneShift3 = CanBecome(s5,g5);
    EXPECT_EQ(oneShift3,true);
}


TEST(failingCases, ogalInput)
{
    std::string s4 = "ogal";
    std::string g4 = "goal";
    bool oneShift4 = CanBecome(s4,g4);
    EXPECT_EQ(oneShift4,false);
}

TEST(failingCases, noReverseInput)
{
    std::string s6 = "Cant Reverse";
    std::string g6 = "Reverse Cant";
    bool oneShift6 = CanBecome(s6,g6);
    EXPECT_EQ(oneShift6,false);
}