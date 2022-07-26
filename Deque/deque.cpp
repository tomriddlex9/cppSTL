#include <iostream>
#include <deque>
#include <vector>
using namespace std;

// a similar sequential data structure like vector but with the
// additional functionlaity of having a push_front and pop_front

// suitable for operations where there are more data accesses instead
// of data modifications , performs a little less efficiently than vectors
// because data is not actually stored continuosly in the memory
template <typename T>
void printDeque(const deque<T> &d)
{
    for (T x : d)
    {
        cout << x << " ";
    }
    cout << endl;
}
int main()
{
    deque<int> d;
    d.assign(3, 2);
    cout << "deque size : " << d.size() << " max size : " << d.max_size() << endl;
    d.push_front(43);
    printDeque(d);
    d.pop_back();
    d.push_back(23);
    cout << d.at(2) << endl;
    deque<int> e = {23, 34, 3, 42, 3, 423, 4, 76, 8};
    cout << d.size() << endl;
    d.swap(e);
    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}