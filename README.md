# HW1 EE538
## University of Southern California
## Instructor: Arash Saifhashemi

Please clone this repository, edit README.md to answer the questions, and fill up functions to finish the homework.

- Please find each question in a separate folder under [files](/files).
- For non-coding questions, fill out the answers in the README file.
- For coding questions, edit the files and check them in.
- For coding questions unless specified, you should add unit tests to the student_test.cc.
  We will clone and test your repo using your tests and some other tests (that are not provided). Your code should pass all of them.
- For submission, please push your answers to Github before the deadline.
- Rubrics:
  
| Question | Points |
| -------- | ------ |
| 1        | 18     |
| 2        | 18     |
| 3        | 18     |
| 4        | 18     |
| 5        | 18     |
| 6        | 18     |
| 7        | 18     |

- Total: 126 points. 100 points is considered full credit.


See [cpp-template](https://github.com/ourarash/cpp-template) for help on installing bazel and debugging.

# Question
- Please refer to [files](/files).
- For each question, implement and test it in the [files](/files).
- Write the runtime complexity of each question in this README file.

# Answers
[TODO: Should be filled out with runtime complexity of each question with justification.]

1. Reverse = 2n + 4
   Ignoring the error and simple cases.
   Where n is the input vector size.

   PlusOne = 4n + 12
   Where n is the input vector size.

2. IsPrime = 3n + 3. There are 3 instructions outside of the for loop, and three instructions on the inside of the for loop.
3. CountNumberOfSpaces = 2n + 4. There are four instructions outside of the loop. The worst case would be all spaces, which would have two instructions
  inside the loop.
4. Flatten3DVector = 2nkm + 5
   This includes three for loops. The first two loops have one instruction in them. The third has two instructions.
   I then added all the other instructions around it and disincluded the error input case.
5. ClimbStairs = 648n^3 + 6. Before getting to the recursive part of the function, it goes through 6 instructions. The last instruction has to go through
    it three times, so this is why the n is cubed.
6. Calculator = 6. If the b input is not zero, there are 6 instructions that the function mus go through.
7. CanBecome = 4n + 9. There is a while loop and a for loop that will each iterate through n times. The while loop contains 4 instructions and the 
    for loop contains 2. Outside of all this, if it runs through everything, it will have 9 instructions outside the loops.
   
# EE538
# EE538
# EE538
# EE538
# EE538
# EE538


