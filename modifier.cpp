#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myListBegin = {10, 20, 30, 40, 50, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    list<int> myList;
    myList = myListBegin;
    // myList.assign(myListBegin.begin(), myListBegin.end());
    list<int> list2 = {500, 600, 700};

    myList.push_back(60);
    myList.push_front(0);

    myList.pop_back();
    myList.pop_front();

    myList.insert(next(myList.begin(), 2), {500, 600, 700, 800});
    myList.insert(next(myList.begin(), 3), list2.begin(), list2.end());

    // myList.erase(next(myList.begin(), 2));
    myList.erase(next(myList.begin(), 2), next(myList.begin(), 4));

    replace(myList.begin(), myList.end(), 100, 0);

    auto it = find(myList.begin(), myList.end(), 30);

    // cout << *it;

    if (it == myList.end())
        cout << "Not Found!";
    else
        cout << "Found " << *it;

    // for (int i : myList)
    // {
    //     cout << i << " ";
    // }

    return 0;
}