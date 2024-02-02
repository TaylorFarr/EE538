#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.

std::vector<int> Flatten3DVector(
    std::vector<std::vector<std::vector<int>>> input)
    {
        int row = input.size();

        if (row < 1)
        {
            std::vector<int> errOut(1);
            errOut[0] = -1;
            return errOut;
        }

        std::vector<int> output(0);
        int count = 0;
        for (int i = 0; i < row; i++)
        {
            int col = input[i].size();
            for (int j = 0; j < col; j++)
            {
                int element = input[i][j].size();
                for (int k = 0; k < element; k++)
                {
                    output.insert(output.end(),1,input[i][j][k]);
                    count = count + 1;
                }
            }
        }
        return output;
    }
// 2. Write some unit tests for them in student_test.cc