// a list in c++ is implemented by using doubly linked lists
// it allows for non contiguous memory allocation
// lists have a slow traversal and does not allow random access like vectors

// list < data_type> list_name

#include <iostream>
#include <list>

using namespace std;
template <typename T>
void printList(list<T> list)
{
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;
    cout << boolalpha << l.empty() << endl;
    l.empty() ? cout << "list is empty" << endl : cout << "list is not empty" << endl;
    l.assign(7, 45);
    printList(l);
    cout << boolalpha << l.empty() << endl;
    list<string> names = {
        "Ghost ", "Tom", "Bob", "Killer"};
    cout << names.front() << endl;
    printList(names);
    names.pop_front();
    cout << names.size() << endl;
    names.insert(names.begin(), "Azmuth");
    names.push_back("Sim");
    printList(names);
    cout << endl;
    list<int> l1 = {32, 45, 434, 3, 4, 32};
    l1.sort();
    list<int> l2 = {67, 543, 76, 43, 76, 8};
    cout << l1.size() << " " << l2.size() << endl;
    l2.sort();
    l1.merge(l2);
    cout << l1.size() << " " << l2.size() << endl;
    printList(l1);
    // unique() is used to remove consecutive duplicates in the list
    l1.unique();

    l1.reverse();
    printList(l1);
}