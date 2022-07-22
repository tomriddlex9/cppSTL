#include <iostream>
using namespace std;
int main()
{
    enum week
    {
        Mon = 1,
        Tue,
        Wed,
        Thurs,
        Fri,
        Sat,
        Sun
    };
    week startDay{Mon}, endDay{Fri};
    cout << startDay << " " << endDay << endl;
    cout << "days between " << (endDay - startDay + 1) << endl;
    enum waterState
    {
        solid,
        liquid,
        gas,
    } water{liquid};
    cout << water << endl;
}