#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v; // Type 1
    // vector<int> v(10); // Type 2
    vector<int> v(10, 5); // Type 3
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}