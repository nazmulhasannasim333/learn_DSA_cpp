#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto it : s)
    {
        cout << it << endl;
    }
    if (s.count(50))
    {
        cout << "Found 50 in the set." << endl;
    }
    else
    {
        cout << "50 not found in the set." << endl;
    }
    return 0;
}