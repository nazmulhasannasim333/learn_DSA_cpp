#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());
    // l.push_back(7);
    // l.push_front(100);
    // l.pop_back();
    // l.pop_front();
    // cout << *next(l.begin(), 2) << endl;
    l.insert(next(l.begin(), 2), 100);
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}