#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n;
    if (n != 5)
    {
        cout << "NO" << endl;
        return;
    }
    string name = "Timur";
    cin >> s;
    sort(name.begin(), name.end());
    sort(s.begin(), s.end());
    for (int i = 0; i < 5; i++)
    {
        if (s[i] != name[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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