#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};

    // cout << myList.front();
    // cout << myList.back();
    auto it = next(myList.begin(), 2);
    cout << *it;

    return 0;
}