// Given an array and a number k, we need to find maximum element in every window of size k.

#include <iostream>
#include <deque>
#include <vector>
using namespace std;
void printMax(vector<int> v, int k)
{
    deque<int> d;
    int n{(int)v.size()};
    // processing the first k elements of the array
    for (int i = 0; i < k; i++)
    {
        while (!d.empty() && v[i] >= v[d.back()])
        {
            d.pop_back();
        }
        d.push_back(i);
    }
    // processing the remaining elements of the array / vector
    for (int i = k; i < n; i++)
    {
        cout << v[d.front()] << " ";
        while (!d.empty() && d.front() <= i - k)
        {
            d.pop_front();
        }
        while (!d.empty() && v[i] >= v[d.back()])
        {
            d.pop_back();
        }
        d.push_back(i);
    }
    cout << v[d.front()] << endl;
}
int main()
{
    deque<int> d;
    vector<int> v = {20, 30, 40, 10, 60};
    int k{3};
    printMax(v, k);
}