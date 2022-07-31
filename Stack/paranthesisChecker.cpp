/**
 * Given an expression string x. Examine whether the pairs and the
 *  orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
 *  For example, the function should return 'true'
 *  for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.
 **/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool paranthesisBalanced(string s)
{
    // stack to store string elements i.e paranthesis
    stack<char> st;
    // store the size of string
    int stringSize{(int)s.length()};
    for (int i = 0; i < stringSize; i++)
    {
        // if they are opening paranthesis then simply push them onto the stack
        if ((s[i] == '(') or (s[i] == '{') or (s[i] == '['))
        {
            st.push(s[i]);
        }
        // if closing bracket , then check if stack top contains the same opening
        // if yes then pop the top element of the stack
        // else return false that the string is not balanced
        else if (s[i] == ')')
        {
            if (st.top() != '(')
                return false;
            else
                st.pop();
        }
        else if (s[i] == ']')
        {
            if (st.top() != '[')
                return false;
            else
                st.pop();
        }
        else
        {
            if (st.top() != '{')
                return false;
            else
                st.pop();
        }
    }
    if (!st.empty())
        return false;
    else
        return true;
}
int main()
{
    string s = "{[()]}{[()()]()}";
    paranthesisBalanced(s) ? cout << "Balanced" : cout << "Not Balanced";
    cout << endl;
}