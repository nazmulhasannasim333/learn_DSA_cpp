#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {7, 8, 9, 10, 11, 12};
    // vector<int> v2;
    // v2 = v;
    // v.pop_back();    // Remove the last element
    // v.push_back(10); // Add an element at the end
    // v.insert(v.begin() + 2, 100); // Insert 100 at index 2
    v.insert(v.begin() + 2, v2.begin(), v2.end()); // Insert elements of v2 at index 2
    // v.erase(v.begin() + 3);       // Erase the element at index 3
    for (int e : v)
    {
        cout << e << " ";
    }
    return 0;
}