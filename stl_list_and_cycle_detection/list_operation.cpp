#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 10, 50, 10};
    // l.remove(10);
    l.sort();
    // l.sort(greater<int>());
    l.unique();
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}