#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>

// TODO:
// 1. Implement the the functions in q.h.

int CountNumberOfSpaces(std::string input)
{
    int n = input.size();
    int count = 0;
    
    if (n < 1)
    {
        count = -1;
        return count;
    }
    for (int i = 0; i < n; i++)
    {

        if (input[i] == ' ')
        {
            count = count + 1;
        }
    }
    return count;
}

// 2. Write some unit tests for them in student_test.cc
