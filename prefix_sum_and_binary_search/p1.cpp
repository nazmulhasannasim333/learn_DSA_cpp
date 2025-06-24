#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> pref_sum(n);
    pref_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pref_sum[i] << " ";
    }

    return 0;
}