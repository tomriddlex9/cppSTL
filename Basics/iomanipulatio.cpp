#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    bool a{true};
    int i{26};
    cout << a << endl;
    cout << std::boolalpha << a << endl;
    cout << std::noboolalpha << a << endl;
    cout << i << endl;
    cout << std::hex << i << endl;
    cout << std::oct << i << endl;
    cout << std::dec << i << endl;
    cout << setw(5);
    cout << setfill('*');
    cout << i << endl;
    cout << setw(5) << left << i << endl;
    cout << setw(5) << right << i << endl;
}