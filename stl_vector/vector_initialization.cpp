#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v; // Type 1
    // vector<int> v(10); // Type 2
    vector<int> v(10, 3); // Type 3
    vector<int> v2(v);    // Type 4
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}