// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

int minimum_vertical_sum(vector<vector<int>> v)
{
    int totalRows = v.size();
    int minSum = INT_MAX;
    int oobc = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int cs = 0;
        for (int j = 0; oobc != totalRows; j++)
        {
            if (v[j].size() > i)
            {
                oobc++;
            }
            cs += v[j][i];
        }
        if (cs < minSum)
            minSum = cs;
    }
    return minSum;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> temp;
            for (int j = 0; j < m; j++)
            {
                int k;
                cin >> k;
                temp.push_back(k);
            }
            v.push_back(temp);
        }
        int min_sum = minimum_vertical_sum(v);
        cout << min_sum << endl;
    }
    return 0;
}
// } Driver Code Ends