#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 3 || n == 2)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void solution()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // if element is prime already then skip the check for it
    //  else check for the element to be replaced by the gcd
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (isPrime(a[i]))
                continue;
            else if (a[j] % a[i] == 0)
            {
                a[j] = a[i];
            }
        }
    }
    int sum{0};
    for (int x : a)
        sum += x;
    cout << sum << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solution();
    }
    return 0;
}