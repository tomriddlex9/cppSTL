#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int, float> pf{43, 54.54};
    cout << pf.first << " " << pf.second << endl;
    pair<int, int> ii = {6, 34};
    cout << ii.first << " " << ii.second << endl;
    pair<string, int> si, t;
    si = make_pair("ghost", 5);
    cout << si.first << " " << si.second << endl;
    t = make_pair("killer", 7);
    si.swap(t);
    cout << si.first << " " << si.second << endl;
}