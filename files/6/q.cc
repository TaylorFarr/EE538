#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
   
ErrorCode Calculator(float a, float b, float &sum, float &diff, float &product, float &ratio)

{
    if (b == 0)
    {
        return ErrorCode::kDivideByZero;
    }

    sum = a + b;
    diff = a - b;
    product = a*b;
    ratio = a/b;
    return ErrorCode::kNoError;
}

// 2. Write some unit tests for them in student_test.cc
