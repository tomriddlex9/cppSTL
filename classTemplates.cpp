#include <iostream>
using namespace std;
template <typename T>
struct Pair
{
    T x, y;
    Pair(T i, T j)
    {
        this->x = i;
        this->y = j;
    }
    T getFirst() { return x; }
    T getSecond() { return y; }
    void setFirst(T i)
    {
        this->x = i;
    }
    void setSecond(T j)
    {
        this->y = j;
    }
};
int main()
{
    Pair<int> p{10, 23};
    cout << p.getFirst() << " " << p.getSecond() << endl;
    Pair<float> f(323.43, 434.3);
    cout << f.getFirst() << " " << f.getSecond() << endl;
    ṇ
}