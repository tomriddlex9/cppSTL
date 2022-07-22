// loops are used for repetition of the same tasks over and over
/*
    A loop is a sequence of instructions that is repeated until a certain condition
    is reached
    There are mainly two types of loops:
Entry Controlled loops: In this type of loops the test condition is tested before entering the loop body. For Loop and While Loop are entry controlled loops.
Exit Controlled Loops: In this type of loops the test condition is tested or evaluated at the end of loop body. Therefore, the loop body will execute atleast once, irrespective of whether the test condition is true or false. do - while loop is exit controlled loop.

*/

#include <iostream>
#define HELLO                    \
    main()                       \
    {                            \
        cout << "Hello" << endl; \
    }
using namespace std;

HELLO