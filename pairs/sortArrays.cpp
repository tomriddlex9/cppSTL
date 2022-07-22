// problem statement

/* Given two arrays a[] and b[] of equal size. The task is to
 sort the array b[] according to the elements of array a[]. That
 is, elements of the array b[] should be rearranged by following the
  corresponding elements of array a[] as appeared in sorted order.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {2, 1, 5, 4, 8, 3, 6, 7};
    char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    // initialise an array of pair of int and char to store the two arrays
    //  as value pairs
    pair<int, char> p[8];
    // copy the values from array to the pair array
    for (int i = 0; i < 8; i++)
    {
        p[i].first = a[i];
        p[i].second = b[i];
    }
    // the pair array initially
    int counter{0};
    for (auto x : p)
    {
        if (counter == 4)
        {
            counter = 0;
            cout << endl;
        }
        counter++;
        cout << x.first << " " << x.second << "   ";
    }
    cout << endl;
    cout << endl;
    // sort the pair array on the basis of the first element
    // this can be done using the sort function in the CPP STL
    sort(p, p + 8);
    // the pair array after sorting
    counter = 0;
    for (auto x : p)
    {
        if (counter == 4)
        {
            counter = 0;
            cout << endl;
        }
        counter++;
        cout << x.first << " " << x.second << "   ";
    }
}
