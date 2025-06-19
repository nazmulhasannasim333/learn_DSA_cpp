#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v; // Type 1
    // vector<int> v(10); // Type 2
    // vector<int> v(10, 3); // Type 3
    // vector<int> v2(v);    // Type 4
    int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v(a, a + 5); // Type 5
    vector<int> v = {1, 2, 3, 4, 5, 6}; // Type 6
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}