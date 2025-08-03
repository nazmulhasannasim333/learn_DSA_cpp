#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, int> p2(30, 40);
    // cout << "First element of p2: " << p2.first << endl;
    // cout << "Second element of p2: " << p2.second << endl;

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (const auto &p : v)
    {
        cout << "First: " << p.first << ", Second: " << p.second << endl;
    }

    return 0;
}