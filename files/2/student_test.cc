#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(checkEvens,evenNumber)
{
    int Even = 12;
    bool isEvenPrime = IsPrime(Even);
    EXPECT_EQ(isEvenPrime,false);

    int Even2 = 100;
    bool isEven2Prime = IsPrime(Even2);
    EXPECT_EQ(isEven2Prime,false);

    int Even3 = 144;
    bool isEven3Prime = IsPrime(Even3);
    EXPECT_EQ(isEven3Prime,false);
}

TEST(checkOdds,oddNumber)
{
    int Odd = 4;
    bool isOddNotPrime = IsPrime(Odd);
    EXPECT_EQ(isOddNotPrime,false);

    int Odd2 = 39;
    bool isOdd2NotPrime = IsPrime(Odd2);
    EXPECT_EQ(isOdd2NotPrime,false);

    int Odd3 = 119;
    bool isOdd3NotPrime = IsPrime(Odd3);
    EXPECT_EQ(isOdd3NotPrime,false);
}

TEST(checkPrimes,primeNumber)
{
    int Prime1 = 11;
    bool isSevenPrime = IsPrime(Prime1);
    EXPECT_EQ(isSevenPrime, true);

    int Prime2 = 17;
    bool isSeventeenPrime = IsPrime(Prime2);
    EXPECT_EQ(isSeventeenPrime, true);

    int Prime3 = 3;
    bool isThreePrime = IsPrime(Prime3);
    EXPECT_EQ(isThreePrime, true);

    int Num1 = 49;
    bool is49Prime = IsPrime(Num1);
    EXPECT_EQ(is49Prime, false);

    int Num2 = 101;
    bool is101Prime = IsPrime(Num2);
    EXPECT_EQ(is101Prime, true);

    int Num3 = 52;
    bool is52Prime = IsPrime(Num3);
    EXPECT_EQ(is52Prime, false);
}