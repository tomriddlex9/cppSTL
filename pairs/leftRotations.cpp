#include <bits/stdc++.h>
using namespace std;

int leftRotate(vector<int> a, int k, int n)
{
    rotate(a.begin(), a.begin() + (k % n), a.begin() + n);
    int maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[maxIndex] < a[i])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

vector<int> getMaxElementIndexes(vector<int> a, vector<int> rotate)
{
    int n = (int)a.size();
    vector<int> sol;
    int maxValIndex = 0;
    int maxVal = INT_MIN;
    for (int i = 0; i < rotate.size(); i++)
    {
        sol.push_back(leftRotate(a, rotate[i], n));
    }
    return sol;
}
int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> rotate = {1, 2, 3, 4};
    vector<int> s = getMaxElementIndexes(a, rotate);
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}
