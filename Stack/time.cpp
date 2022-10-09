#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int seconds = 12244;

    int min{0}, hour{0}, sec{0};

    while (seconds >= 3600)
    {
        seconds -= 3600;
        hour++;
    }
    while (seconds >= 60)
    {
        seconds -= 60;
        min++;
    }
    sec = seconds;
    vector<char> time(6); // hh mm ss
    if (hour < 12)
    {
        time[0] = 0;
        time[1] = hour;
    }
    if (hour == 13)
    {
        time[0] = 'E';
        time[1] = 'E';
    }
}