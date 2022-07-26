// design a data structure that supports the min and max operations in O(1) time

#include <iostream>
#include <deque>
using namespace std;
class dataStructure
{
private:
    deque<int> d;

public:
    void insertMin(int x)
    {
        if (d.size() == 0)
        {
            d.push_front(x);
            cout << x << " Value inserted" << endl;
        }
        else
        {
            if (d[0] < x)
                cout << x << " Not a min value " << endl;
            else
            {
                d.push_front(x);
                cout << x << " Value inserted" << endl;
            }
        }
    }
    void insertMax(int x)
    {
        if (d.size() == 0)
        {
            d.push_back(x);
            cout << x << " Value inserted " << endl;
        }
        else
        {
            if (*(d.end() - 1) > x)
                cout << x << " Not a max value " << endl;
            else
            {
                d.push_back(x);
                cout << x << " Value inserted" << endl;
            }
        }
    }
    int getMin()
    {
        return d.front();
    }
    int getMax()
    {
        return d.back();
    }
    int extractMin()
    {
        cout << d.front() << " extracted" << endl;
        d.pop_front();
    }
    int extractMax()
    {
        cout << d.back() << " extracted" << endl;
        d.pop_back();
    }
    void print()
    {
        for (int x : d)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};
int main()
{
    dataStructure x;
    x.insertMin(5);
    x.insertMax(10);
    x.insertMin(3);
    x.insertMax(15);
    x.insertMin(2);
    x.insertMin(23);
    x.insertMax(45);
    x.print();
    cout << x.getMin() << endl;
    cout << x.extractMin() << endl;
    cout << x.getMin() << endl;
    x.insertMax(30);
    cout << x.extractMax() << endl;
    x.print();
}