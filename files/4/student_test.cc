#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(exampleTest,example1)
{
    std::vector<std::vector<std::vector<int>>> input1 =
    {
        {{1, 2}, {3, 4}},
        {{5}, {6}, {}},
        {{7, 8}}
    };
    std::vector<int> OutputVector = Flatten3DVector(input1);
    std::vector<int> expectedOutput = {1,2,3,4,5,6,7,8};
    EXPECT_EQ(OutputVector[6],expectedOutput[6]);
}

TEST(exampleTest,example2)
{
    std::vector<std::vector<std::vector<int>>> input2 =
    {
        {{1, 2}, {3, 4}},
        {{}, {}, {}},
        {{7, 8}}
    };
    std::vector<int> OutputVector2 = Flatten3DVector(input2);
    std::vector<int> expectedOutput2 = {1,2,3,4,7,8};
    EXPECT_EQ(OutputVector2[5],expectedOutput2[5]);
}

TEST(exampleTest,example3)
{
    std::vector<std::vector<std::vector<int>>> input3 =
    {
        {{1, 2}, {3, 4, 5}},
        {{5}, {6}, {}},
        {{7, 8}}
    };
    std::vector<int> OutputVector3 = Flatten3DVector(input3);
    std::vector<int> expectedOutput3 = {1,2,3,4,5,5,6,7,8};
    EXPECT_EQ(OutputVector3[6],expectedOutput3[6]);
}

TEST(exampleTest,example4)
{
    std::vector<std::vector<std::vector<int>>> input4 =
    {
        {{}, {}},
        {{}, {}, {}},
        {{}, {}, {}, {}}
    };
    std::vector<int> OutputVector4 = Flatten3DVector(input4);
    std::vector<int> expectedOutput4 = {};
    EXPECT_EQ(OutputVector4,expectedOutput4);
}

TEST(exampleTest,example5)
{
    std::vector<std::vector<std::vector<int>>> input5 =
    {
        {{}, {}},
        {{}, {}, {}},
        {{}, {}, {}, {1,2,5}}
    };
    std::vector<int> OutputVector5 = Flatten3DVector(input5);
    std::vector<int> expectedOutput5 = {1,2,5};
    EXPECT_EQ(OutputVector5,expectedOutput5);
}

TEST(exampleTest,null)
{
    std::vector<std::vector<std::vector<int>>> nullInput = {};
    std::vector<int> OutputVectorNull = Flatten3DVector(nullInput);
    std::vector<int> expectedOutputNull = {-1};
    EXPECT_EQ(OutputVectorNull,expectedOutputNull);
}