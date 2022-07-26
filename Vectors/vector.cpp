/*  *** declaring vectors without size :
    vector<data_type> vector_name;

    ** declaring vectors with size :
    vector<data_type>vector_name(size)


    *** declaring vectors with size and value to initialise:
    vector<data_type>vector_name(size,val)
*/

#include <iostream>
#include <vector>

// by default vectors are passed by value to functions
// we should usually try to use references to vector
// or const references to improve the efficiency
using namespace std;
void changer(const vector<int> &x)
{
    cout << "Inside changer function " << endl;
    for (int i : x)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vi(5, 4);
    // using modified 'for' loop to access the array elements
    for (int x : vi)
        cout << x << " ";
    cout << endl;
    changer(vi);
    cout << vi.at(0) << endl;
    // modifying vector values using iterators
    vector<int>::iterator itr;
    int counter{1};
    for (itr = vi.begin(); itr != vi.end(); itr++)
    {
        *itr = counter++;
    }
    // at does out of the bound checking which is not provided
    //  by [ ] operator
    cout << vi.at(4) << endl;
    cout << vi.at(3) << endl;
    for (int x : vi)
        cout << x << " ";
    cout << endl;
    // traversing and modifying vector using iterator , auto and while loop
    auto i = vi.begin();
    while (i != vi.end())
    {
        *i += 2;
        i++;
    }
    for (auto x : vi)
    {
        cout << x << " ";
    }
    cout << endl;
}
