#include <iostream>
using namespace std;
int main()
{
    int a{32};
    int *p_a = &a;
    cout << "address of a " << &a << endl;
    cout << "address stored in pointer p_a " << p_a << endl;
    cout << "value in a = " << a << endl;
    cout << "value of a , accessed using pointer " << *p_a << endl;
    // a void pointer that does not point to anything
    void *ptr;
    (ptr) ? cout << ptr << endl : cout << "NULL" << endl;
    char c = 'c';
    ptr = (static_cast<char *>(&c));
    cout << "ptr stores the address " << ptr << endl;
    cout << "value access using pointer " << *ptr << endl;
}