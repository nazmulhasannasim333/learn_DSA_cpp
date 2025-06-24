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
    int total_sum = pref_sum[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (pref_sum[i] - a[i] == total_sum - pref_sum[i])
        {
            cout << "Equilibrium index found at: " << i << endl;
            return 0;
        }
    }
    return 0;
}