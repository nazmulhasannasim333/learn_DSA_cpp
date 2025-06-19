#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // vector<int> v2;
    // v2 = v;
    v.pop_back();    // Remove the last element
    v.push_back(10); // Add an element at the end
    for (int e : v)
    {
        cout << e << " ";
    }
    return 0;
}