/**
 * Queue is a sequential data structure that follows the FIFO order
 * push operation is done from the rear of the queue
 * last pushed element is retrieved by using back()
 * pop operation is done from the front of the queue
 * the element which will be popped first can be retrieved using front()
 * size() returns the current size of the queue
 * empty() checks if the given queue is empty or not and returns a bool value
 * swap() is used to change the contents of the queue and takes a queue of same type
 * as the input parameter

**/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i + 1);
    }
    cout << "front : " << q.front() << "  back : " << q.back() << endl;
    int a = q.front();
    int b = q.back();
    cout << "front + back = " << a + b << endl;
    cout << "popped the element " << q.front() << endl;
    q.pop();
    cout << "now front of queue = " << q.front() << endl;

    // a pointer to a queue of string data type,
    // we can access queue members and function using pointer with -> operator
    auto sentence = new queue<string>;
    sentence->push("Ghost");
    sentence->push("Dont");
    sentence->push("Die");
    while (!sentence->empty())
    {
        cout << sentence->front() << " ";
        sentence->pop();
    }
    cout << endl;

    queue<char> S;
    queue<char> K = queue<char>({'G', 'H', 'O', 'S', 'T'});
    S.swap(K);
    while (!S.empty())
    {
        cout << S.front() << " ";
        S.pop();
    }
}