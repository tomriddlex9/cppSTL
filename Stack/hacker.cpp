#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a.begin(), a.begin() + 4);
    int unique{1};
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 1])
            continue;
        else
            unique++;
    }
    cout << 4 - unique << endl;
}