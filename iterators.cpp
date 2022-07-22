#include <iostream>
#include <vector>
template <typename T>
T maxnum(T x, T y)
{
    return x > y ? x : y;
}
using namespace std;
int main()
{
    int x = maxnum<int>(4, 56);
    cout << x << endl;
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator i = v.begin();
    cout << (*i) << endl;
    i = next(i);
    cout << (*i) << endl;
    i = v.end();
    i = prev(i);
    cout << (*i) << endl;
}