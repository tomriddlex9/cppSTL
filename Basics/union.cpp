#include <iostream>
using namespace std;

/*
One might question the utility of such a construct because once we update another data
 member, the information possessed by the other one gets lost. Unions are useful in cases
  where one needs to conserve data. e.g. Suppose we want to implement a binary tree data
  structure where each leaf node has a double data value, while each internal node
  has pointers to two children, but no data. If we declare this as:

*/

struct Node
{
    bool isLeaf;
    union
    {
        struct
        {
            Node *left;
            Node *right;
        } internal;
        double data;
    } info;
};

// the use case is pretty rare and dumb, so for now Unions wont be of much use to us
// but lets just know it for the trivia
int main()
{
    union test
    {
        int x;
        int y;
    };
    test t;
    t.x = 5;
    cout << t.x << " " << t.y << endl;
    cout << sizeof(t) << endl;
}