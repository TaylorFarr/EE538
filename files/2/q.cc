#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.

bool IsPrime(int number)
{
    if (number <= 0)
    {
        return false;
    }
    if (number == 1 || number == 2)
    {
        return true;
    }

    else if (number % 2 == 0)
    {
        return false;
    }

    else 
    {
        for(int i = 3; i <= number; i++)
        {
            int testNum = number % i;
            if (number == i)
            {
                return true;
            }

            else if (testNum == 0)
            {
                return false;
            }
            
        }         
    }

    
}
// 2. Write some unit tests for them in student_test.cc
