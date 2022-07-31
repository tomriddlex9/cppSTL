/**
 * Given a vector V of  N elements and two special numbers x and y.
 * Remove all consecutive same special elements.
 * The final vector should be free from any consecutive same special elements.
 * */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void reverseVector(vector<int> &v)
{
    int size = (int)v.size();
    for (int i = 0; i < (size / 2); i++)
    {
        swap(v[i], v[size - i - 1]);
    }
}

vector<int> removeSpecialConsecutive(vector<int> v, int x, int y)
{
    // check for removals
    // if number of removals = 0 , return the vector
    // else call for the same set of step i.e recursion

    // a better solution is to think the special characters as paranthesis
    // and the problem becomes like matching the paranthesis or balaned paranthesis
    // using stack problem
    stack<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        if (s.empty())
        {
            s.push(v[i]);
        }
        else if (s.top() == v[i] && (v[i] == x || v[i] == y))
        {
            s.pop();
        }
        else if (s.top() != v[i])
        {
            s.push(v[i]);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverseVector(ans);
    return ans;
}

int main()
{
    vector<int> v = {2, 1, 2, 2, 1, 5};
    int x{1}, y{2};
    v = removeSpecialConsecutive(v, x, y);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}