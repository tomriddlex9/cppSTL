#include <iostream>
#include <forward_list>
using namespace std;
auto findInList(forward_list<int> &l, int x)
{
    forward_list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        if ((*it) == x)
            return it;
    }
    return l.begin();
}
int main()
{
    forward_list<int> l = {10, 20, 30, 45};
    l.push_front(3);
    l.push_front(2);
    l.pop_front();
    cout << *(l.begin()) << endl;

    for (auto i = l.begin(); i != (l.end()); i++)
    {
        *i += 2;
    }
    for (int x : l)
        cout << x << " ";
    cout << endl;
    l.insert_after(findInList(l, 30), 34);
    l.insert_after(findInList(l, 22), 28);
    for (int x : l)
        cout << x << " ";
    cout << endl;
}