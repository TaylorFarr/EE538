#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(reverseTest, arraySize)
{
    std::vector<int> vec = {1,2,3,4,5};
    std::vector<int> vec2 = {1,1};
    std::vector<int> f;
    std::vector<int> f2;
    
    EXPECT_EQ(vec[3], 4);  //Testing input vector

    f = Reverse(vec);      //Testing the 5 element input vector
    EXPECT_EQ(f[1],4);   
    f2 = Reverse(vec2);  
    EXPECT_EQ(f2[0],1);    //Testing two elements with the same value vector
        
}

TEST(reverseTest, nullCase)
{
    std::vector<int> z = {};
    std::vector<int> null;
    std::vector<int> x = {-1};
    null = Reverse(z);
    EXPECT_EQ(null,x);    //Testing the no input vector
}



TEST(plusOneTest, oneIncrement)
{
    std::vector<int> vec1 = {1,2,3};
    std::vector<int> vec1Result;
    vec1Result = PlusOne(vec1);
    EXPECT_EQ(vec1Result[2],4);
}

TEST(plusOneTest, digitFlip)
{
    std::vector<int> vec2 = {1,2,9};
    std::vector<int> vec2Result;
    vec2Result = PlusOne(vec2);
    EXPECT_EQ(vec2Result[0],1);
    EXPECT_EQ(vec2Result[1],3);
    EXPECT_EQ(vec2Result[2],0);
}

TEST(plusOneTest, overflow)
{
    std::vector<int> vec3 = {9,9,9};
    std::vector<int> vec3Result;
    vec3Result = PlusOne(vec3);
    EXPECT_EQ(vec3Result[0],1);
    EXPECT_EQ(vec3Result[3],0);
}

TEST(plusOneTest, twoNines)
{
    std::vector<int> vec3 = {8,9,9};
    std::vector<int> vec3Result;
    vec3Result = PlusOne(vec3);
    EXPECT_EQ(vec3Result[0],9);
    EXPECT_EQ(vec3Result[1],0);
    EXPECT_EQ(vec3Result[2],0);
}

TEST(plusOneTest, ohOne)
{
    std::vector<int> vec4 = {0,1};
    std::vector<int> vec4Result;
    vec4Result = PlusOne(vec4);
    EXPECT_EQ(vec4Result[0],0);
    EXPECT_EQ(vec4Result[1],2);
}

TEST(plusOneTest, inputElementSize)
{
    std::vector<int> bigVec = {1,2,10,4,1};
    std::vector<int> bigVecOut(bigVec);
    bigVecOut = PlusOne(bigVec);
    EXPECT_EQ(bigVecOut[0],-1);
}

TEST(plusOneTest, NullInput)
{
    std::vector<int> nullVec = {};
    std::vector<int> nullVecOut(nullVec);
    std::vector<int> x2 = {-1};
    nullVecOut = PlusOne(nullVec);
    EXPECT_EQ(nullVecOut,x2);
}