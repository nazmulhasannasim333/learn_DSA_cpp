#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 2, 3, 4, 3, 6};
    vector<int> v2 = {7, 8, 9, 10, 11, 12};
    // vector<int> v2;
    // v2 = v;
    // v.pop_back();    // Remove the last element
    // v.push_back(10); // Add an element at the end
    // v.insert(v.begin() + 2, 100); // Insert 100 at index 2
    // v.insert(v.begin() + 2, v2.begin(), v2.end()); // Insert elements of v2 at index 2
    // v.erase(v.begin() + 3);       // Erase the element at index 3
    // v.erase(v.begin() + 1, v.begin() + 5); // Erase elements from index 2 to 4
    // replace(v.begin(), v.end() - 2, 3, 100); // Replace all occurrences of 3 with 100
    auto it = find(v.begin(), v.end(), 4);
    if (it != v.end())
    {
        cout << "Element found at index: " << distance(v.begin(), it) << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    for (int e : v)
    {
        cout << e << " ";
    }
    return 0;
}