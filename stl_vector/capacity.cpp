#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v.capacity() << endl; // Initial capacity is 0
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    cout << v.size() << endl; // Size is 4
    v.clear();                // Clear the vector
    cout << v.size() << endl; // Size is 0
    cout << v[0] << endl;

    return 0;
}