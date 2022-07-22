#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    char c = 'f';
    string s = "Ghost";
    try
    {
        if (x > 10)
        {
            throw(x);
        }
        else if (c == 'd')
        {
            throw(c);
        }
        // else if (s == "Ghost")
        // {
        //     throw(s);
        // }
    }
    catch (int a)
    {
        cout << "Found error " << a << endl;
    }
    catch (char a)
    {
        cout << "Exception found, got the character " << c << endl;
    }
    catch (...)
    {
        cout << "Default exception " << endl;
    }
    cout << "Ghost" << endl;
}