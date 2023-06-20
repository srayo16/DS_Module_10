#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList(10, 5);
    // list<int> myListBegin = {1, 2, 3, 4, 5};
    // list<int> myList(myListBegin);
    int arr[5] = {1, 2, 3, 4, 5};
    list<int> myList(arr, arr + 5);
    // cout << myList.size();
    // cout << myList.front();

    // for (auto i = myList.begin(); i != myList.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    for (int i : myList)
    {
        cout << i << " ";
    }

    return 0;
}