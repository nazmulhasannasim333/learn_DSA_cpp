#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2;
    v2 = v;
    for (int e : v2)
    {
        cout << e << " ";
    }
    return 0;
}