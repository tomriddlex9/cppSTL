#include <iostream>
#include <list>
using namespace std;
// for this problem , we will use a circular linked list
// and after every iteration , if the iterator points to the list.end
// then point the iterator to the list.begin
int josephus(int n, int k)
{
    // create a doubly linked list using the list container
    list<int> l;
    // set all the positions in the linked list using the push_back operation
    for (int i = 0; i < n; i++)
    {
        l.push_back(i);
    }
    // create and point an iterator to the beginning of the list
    list<int>::iterator it = l.begin();
    // repeat the procedure until only one survivor remains in the list
    while (l.size() > 1)
    {
        // increment the iterator k times using loop
        // because iterators does not support += operation
        for (int i = 1; i < k; i++)
        {
            it++;
            // if the iterator points to the end of list
            // we set the iterator to the begin , this is done
            // to implement the functionality of a circular linked list
            if (it == l.end())
            {
                it = l.begin();
            }
        }
        // after iterating to the specific element to be killed , remove it
        // and point to the next element after the one that was killed
        it = l.erase(it);
        // check if the iterator is pointing to the end
        // it is one of the edge cases for two element only , or if the
        // killed element was the last element of the list
        if (it == l.end())
        {
            it = l.begin();
        }
    }
    // return the only remaining survivor in the list
    return *(l.begin());
}
int main()
{
    int n = 50000, k = 6;
    cout << josephus(n, k);
}