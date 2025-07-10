#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6};
    // cout << l.size() << endl;
    // cout << *l.begin() << endl;
    list<int> l2(l);
    for (int n : l2)
    {
        cout << n << " ";
    }

    return 0;
}