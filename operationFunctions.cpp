#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {0, 20, 40, 10, 30, 50, 10, 10, 0};
    // myList.remove(0);
    // sort(myList.begin(), myList.end());
    // myList.sort();

    // myList.unique();

    // myList.sort(greater<int>());

    myList.reverse();

    for (int i : myList)
    {
        cout << i << " ";
    }

    return 0;
}