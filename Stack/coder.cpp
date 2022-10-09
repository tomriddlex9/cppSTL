#include <bits/stdc++.h>
using namespace std;
int mostFrequent(vector<int> arr, int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    int maxFrequency = 0;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash)
    {
        maxFrequency = max(maxFrequency, i.second);
    }
    return maxFrequency;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxF = mostFrequent(a, n);
    cout << n - maxF << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}