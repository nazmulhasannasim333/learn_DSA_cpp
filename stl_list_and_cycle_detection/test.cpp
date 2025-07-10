#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6};
    // cout << l.size() << endl;
    // cout << *l.begin() << endl;
    // int a[] = {10, 20, 30};
    // vector<int> v = {10, 20, 30, 40, 50, 60};
    // list<int> l2(v.begin(), v.end());
    // l.clear();
    // if (l.empty())
    // {
    //     cout << "List is empty" << endl;
    // }
    // else
    // {
    //     cout << "List is not empty" << endl;
    // }
    l.resize(3);
    for (int n : l)
    {
        cout << n << " ";
    }

    return 0;
}