#include <iostream>
using namespace std;
int main()
{
    int a{4}, b{5};
    // there are five bitwise operators in cpp
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;

    // left shif operator
    /*  if we assume that the leading y bits are 0,
    then result of (x<<y) is equal to
      x * pow(2,y)
      */
    // this is also equal to a*(2^1) , thus 8 here
    cout << (a << 1) << endl;
    // right shift operator
    /* right shift operator is equal to dividing a
    number by 2 , since it shifts all its bit
    to the left side
    x / pow(2,y) and then taking floor of this value
    */

    // this is also equal to a/(2^1) , thus 2
    cout << (a >> 1) << endl;
    // not operator
    /* this is a unary operator , and flips all
    the bit of a number in its binary format

    we should use not operator for unsigned values
    since if used with signed numbers , it can change
    the sign bit of the number
    */
    cout << (~a) << endl;
}