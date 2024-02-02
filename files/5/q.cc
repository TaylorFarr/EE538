#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.

int ClimbStairs(int n)
{
    if (n >= 45 || n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else if (n == 3)
    {
        return 4;
    }
    else if (n > 3)
    {
        return ClimbStairs(n - 3) + ClimbStairs(n - 2) + ClimbStairs(n - 1);
    }
}
// 2. Write some unit tests for them in student_test.cc

//int count;
    // if (n == 0)
    // {
    //     return 0;
    // }
    // else if (n < 0)
    // {
    //     return -1;
    // }
    // else if (n % 6 == 0)
    // {
    //     count = 3;
    //     for (int i = 1; i < n/3; i++)
    //     {
    //         for (int j = 1; j < n/2; j++)
    //         {
    //             if (3*i + 2*j == n)
    //             {
    //                 //Calculate Combinations
    //             }
    //         }
    //     }

    //     for (int i = 1; i < n/3; i++)
    //     {
    //         for (int j = 1; j < n; j++)
    //         {
    //             if (3*i + j == n)
    //             {
    //                 //Calculate Combinations
    //             }
    //         }
    //     }

    //     for (int = 1; i < n/2; i++)
    //     {
    //         for (int j = 1; j < n; j++)
    //         {
    //             if (2*i + j == n)
    //             //Calculate Combinations
    //         }
    //     }
    //     return count;
    // }
    // else if (n % 3 == 0)
    // {
    //     count = 2;
    //     for (i = 1; i < n/3; i++)
    //     {
    //         for (j = 1; n/2; j++)
    //         {
    //             for (int k = 1; k < n; k++)
    //             {
    //                 if (3*i + 2*j + k == n)
    //                 //Calculate Combinations
    //             }
    //         }
    //     }
    //     for (i = 1; i < n/3; i++)
    //     {
    //         for (j = 1; j < n/2; j++)
    //         {
    //             if (3*i + 2*j == n)
    //             {
    //                 //Calculate Combinations
    //             }
    //         }
    //     }
    //     for (i = 1; i < n/2; i++)
    //     {
    //         for (j = 1; j < n; j++)
    //         {
    //             if (3*i + j == n)
    //             {
    //                 //Calculate Combinations
    //             }
    //         }
    //     }
    // }