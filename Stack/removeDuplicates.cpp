// You are given string str. You need to remove the consecutive duplicates from the given string using a Stack.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
void stringReverse(string &s)
{
    int size = s.size();
    for (int i = 0; i < (size / 2); i++)
    {
        swap(s[i], s[size - i - 1]);
    }
}
class Solution
{
public:
    // Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        // if stack empty push the element
        // else check the top, if top same as current element
        // then move forward in the string until different element found
        // push only unique elements
        stack<char> sc;
        sc.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (sc.top() == s[i])
                continue;
            else
                sc.push(s[i]);
        }
        string rev;
        while (!sc.empty())
        {
            rev.push_back(sc.top());
            sc.pop();
        }
        // since the answer is stored in the reverse order, we need to
        // reverse the given string and then return it as a result
        stringReverse(rev);
        return rev;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.removeConsecutiveDuplicates(s) << endl;
    }

    return 0;
} // } Driver Code Ends