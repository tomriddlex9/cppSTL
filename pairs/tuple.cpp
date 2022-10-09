#include <iostream>
#include <tuple>
using namespace std;
int main()
{
    tuple<int, char> t = make_tuple(34, 'D', 43, 'F', 89, 'K', 67, 82, 90);
    for (int x : t)
    {
        cout << x << " ";
    }
}