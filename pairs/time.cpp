#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string time;
    int hr = ((s[0] - '0') * 10) + (s[1] - '0');
    if (s[8] == 'A' && s[0] == '1' && s[1] == '2')
    {
        time.push_back('0');
        time.push_back('0');
    }
    if (s[8] == 'P')
    {
        hr += 12;
        time.push_back((hr / 10) + '0');
        time.push_back((hr % 10) + '0');
    }
    for (int i = 2; i < 8; i++)
    {
        time.push_back(s[i]);
    }
    return time;
}

int main()
{
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
