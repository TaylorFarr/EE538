#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
std::vector<int> Reverse(std::vector<int> input)
{
    int n = input.size();
    
    if (n < 1)
    {
        std::vector<int> output(1);
        output[0] = -1;
        return output;
    }

   
    else 
    {
        std::vector<int> output(n);
        for (int i=0;i<n;i++)
        {
            output[i] = input[n-i-1];
        }
        return output;
    }
}


std::vector<int> PlusOne(std::vector<int> input)
{
    int n = input.size();
    std::vector<int> errOut = {-1};

    if (n < 1)
    {
        std::vector<int> output(1);
        output[0] = -1;
        return output;
    }
    
    for (int i=0;i<n;i++)          //Check for integers 10 or greater and return an error
    {
        if (input[i] > 9)
        {
            return errOut;
        }
    }

   
    while (n > -1)
    {
        if (input[n-1] == 9)           //Check if the last element is a 9. If it is, then add an element & set = 0.
        {
            input[n-1] = 0;
            int carry = 1;
            while (carry == 1)
            {
                n--;
                if (input[n-1] == 9)
                {
                    if (n-1 == 0)
                    {
                        input.insert(input.end(),1,0);
                        input[0] = 1;
                        carry = 0;
                        return input;
                    }
                    else
                    {
                        input[n-1] = 0;
                    }
                    
                }

                else
                {
                    input[n-1] = input[n-1] + 1;
                    carry = 0;
                    return input;
                }
            }
        }

        else 
        {
            input[n-1] = input[n-1] + 1;
            n = -1;
            return input;
        }
    }
}   

// 2. Write some unit tests for them in student_test.cc
