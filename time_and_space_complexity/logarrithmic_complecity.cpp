#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;    // ---> O(1)
    cin >> n; // ---> O(1)

    for (int i = 1; i <= n; i *= 2) // ---> O(log n)
    {
        cout << i << endl;
    }

    return 0; // ---> O(1)
}

// Summery
// If increment by multiplying, so it is logarithmic complexity = O(log n)
// If decrement by dividing, so it is logarithmic complexity = O(log n)

// The overall time complexity of this code is O(log n) + O(1) + O(1) = O(log n).
