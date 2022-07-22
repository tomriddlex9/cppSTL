#include <iostream>
using namespace std;
struct A
{
    char c; // 1
    char d; // 1
    int i;  // 4
};
struct B
{
    char c; // 1  4
    int i;  // 4  4
    char d; // 1  4
};
int main()
{
    A a = {'a', 'b', 43};
    cout << sizeof(int) << endl;
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(a) << endl;
}