// program to take input from main arguements instead of cin

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    // int a = (int)*argv[1];
    // int b{(int)*argv[2]};
    // cout << "sum : " << a + b;
    cout << "You entered " << argc << "  arguements" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    int a = stoi(argv[1]);
    int b = stoi(argv[2]);
    cout << "sum of a and b " << a + b << endl;
    return 0;
}
