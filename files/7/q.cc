#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.

bool CanBecome(const std::string &s, const std::string &goal)
{
    int n = s.size();
    int g = goal.size();
    
    std::string compare = goal;
    if (n != g)
    {
        return false;
    }

    else
    {
        if (s == compare)
        {
            return true;
        }
        int count = 0;
        std::string firstElement = compare.substr(0,1);
        while (count < n)
        {
            firstElement = compare.substr(0,1);
            compare = compare + firstElement;
            for (int i = 0; i <= n; i++)
            {
                if (i == n)
                {
                    compare = compare.substr(0,compare.length() - 1);
                }
                else
                {
                    compare[i] = compare[i+1];
                }               
            }
            if (compare == s)
            {
                return true;
            }
            count = count + 1;
        }
    return false;
    }
}
// 2. Write some unit tests for them in student_test.cc
