#include <bits/stdc++.h>
using namespace std;
class dataStructure
{
private:
    list<int> l;

public:
    void insert(int x)
    {
        l.push_back(x);
    }
    void print()
    {
        for (auto it = l.begin(); it != l.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    void replace(int x, vector<int> &v)
    {
        auto it = find(l.begin(), l.end(), x);
        if (it == l.end())
            return;
        it = l.erase(it);
        l.insert(it, v.begin(), v.end());
    }
    int size()
    {
        return l.size();
    }
};
int main()
{
    dataStructure d;
    d.insert(4);
    cout << d.size() << endl;
    for (int i = 5; i < 12; i++)
        d.insert(i);
    d.print();
    cout << d.size() << endl;
    vector<int> v = {34, 43, 23};
    d.replace(10, v);
    d.print();
}