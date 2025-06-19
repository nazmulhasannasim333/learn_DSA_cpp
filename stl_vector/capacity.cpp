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
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // cout << v.size() << endl; // Size is 4
    // v.clear();                // Clear the vector
    // cout << v.size() << endl; // Size is 0
    // cout << v[0] << endl;
    // if (v.empty()) // Check if the vector is empty
    // {
    //     cout << "Vector is empty" << endl;
    // }
    // else
    // {
    //     cout << "Vector is not empty" << endl;
    // }
    v.resize(7, 200); // Resize the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // Print the elements of the vector
    }

    return 0;
}