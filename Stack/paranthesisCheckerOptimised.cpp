/**
 * in this optimised version of the paranthesis checker solution
 * we have further modularised our approach to matching the characters
 * by making a special function that checks for the possible valid pairs
 * and returns true or false based on that , this provides us with more
 * flexibility to add more such matching pairs
 **/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool matching(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}
bool isBalanced(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            s.push(str[i]);
        else
        {
            if (s.empty())
                return false;
            else if (matching(s.top(), str[i]) == false)
                return false;
            else
                s.pop();
        }
    }
    return (s.empty());
}
int main()
{
    string s = "{[()]}{[()()]()}";
    isBalanced(s) ? cout << "Balanced" : cout << "Not Balanced";
    cout << endl;
}