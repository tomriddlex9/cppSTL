#include <iostream>
#include <vector>
#include <stack>
#include <exception>
using namespace std;
// function to print all vector elements
void printVector(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}
// a custom Data class to create a stack of user defined data type
class customData
{
    // private data members
private:
    int data;
    string name;
    char gender;

public:
    // default constructor for the custom data type
    customData(int d, string n, char c)
    {
        data = d;
        name = n;
        gender = c;
    }
    // setter functions to modify the values in the custom Data type
    void setData(int d) { data = d; }
    void setName(string s) { name = s; }
    void setGender(char c) { gender = c; }
    // a print function to print all the members of the custom data type
    void print()
    {
        cout << "data = " << data << endl;
        cout << "name = " << name << endl;
        cout << "gender = " << gender << endl;
    }
};
// main execution of the program starts here
int main()
{
    // create a stack of type char , string and int
    stack<char> sc;
    stack<string> ss;
    stack<int> s;
    // creating a stack of our own customData type
    stack<customData> customStack;
    // pushing elements onto the stack
    customStack.push(customData(45, "Ghost", 'F'));
    customStack.push(customData(56, "Killer", 'M'));

    // using the emplace function of the stack to create an instance of object and then
    //  place it onto the top of stack
    customStack.push(customData(63, "Sting", 'M'));
    // printing the size of stack using the size() function
    cout << "Size of custom stack = " << customStack.size() << endl;
    // the way to print all the elements of the stack is to read them and pop
    // untill all elements are read and the stack holds one element or is empty
    while (!customStack.empty())
    {
        customData temp = customStack.top();
        temp.print();
        customStack.pop();
    }
    // using the empty() function to check if the stack is empty
    if (s.empty())
        cout << "Stack empty" << endl;
    else
        cout << "Stack not Empty" << endl;
    // creating a vector whose reverse will be stored in another vector using the stack data structure
    vector<int> v = {32, 54, 45, 45, 4, 54, 345, 74};
    // it is not possible to reverse the vector using the LIFO style since it does not have  a
    // pop_front function like deque

    // print the stack size before inserting the elements
    cout << s.size() << endl;
    for (int x : v)
    {
        s.push(x);
    }
    // stack size after all the elements of the vector are pushed onto the stack
    cout << s.size() << endl;
    // get the reference to the top element to the stack , it is like the custom peek function
    cout << s.top() << endl;
    printVector(v);
    vector<int> rv;
    // pushing the elements of the stack onto another vector which will reverse their order
    //  that was in the original vector
    while (!s.empty())
    {
        rv.push_back(s.top());
        s.pop();
    }
    printVector(rv);
    stack<int> foo;
    stack<int> bar;
    foo.push(10);
    foo.push(20);
    foo.push(30);
    bar.push(22);
    bar.push(44);
    cout << "foo address " << &foo << " foo size " << foo.size() << endl;
    cout << "bar address " << &bar << " bar size " << bar.size() << endl;
    /** since the address of both the stack pointer will remain
     * same after the swap operation , we can understand that the
     * contents of the stack are changed and not the pointers to the stack
     * are changed
     */
    foo.swap(bar);
    cout << "foo address " << &foo << " foo size " << foo.size() << endl;
    cout << "bar address " << &bar << " bar size " << bar.size() << endl;
}