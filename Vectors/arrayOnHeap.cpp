#include <iostream>
using namespace std;
int *staticArr = new int(5);
void fun()
{
    int *arr = new int(4);
    for (int i = 0; i < 4; i++)
        arr[i] = i + 23;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    free(arr);
    free(staticArr);
}
int main()
{
    int array[] = {23, 43, 43, 43, 23};
    for (int x : array)
    {
        cout << x << " ";
    }
    cout << endl;
    fun();

    for (int i = 0; i < 5; i++)
        staticArr[i] = i;
    cout << array[2] << endl;
    for (int i{0}; i < 5; i++)
    {
        cout << staticArr[i] << " ";
    }
    cout << endl;
}
