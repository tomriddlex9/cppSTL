// example of buffer in a input stream

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter int 1: " << endl;
    cin >> a;
    cout << "Enter int 2: " << endl;
    cin >> b;
    cout << "Enter int 3: " << endl;
    cin >> c;
    cout << a + b + c << endl;
    // if you enter the values one by one , nothing is stored in the buffer ,
    // but if you enter all the three integers at the first prompt
    // then the program takes no input for other two prompts and the two other
    // input values are copied from the buffer on execution of each input statements
    // and the output is printed on the screen
}