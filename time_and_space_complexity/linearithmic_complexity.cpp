#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                       // ----> O(1)
    cin >> n;                    // ----> O(1)
    for (int i = 1; i <= n; i++) // ----> O(n)
    {
        for (int j = 1; j <= n; j *= 2) // ----> O(log n)
        {
            cout << "Hello" << endl;
        }
    }
    return 0;
}

// Summery of complexities:
// O(1) + O(1) + O(n) + O(log n) = O(n log n)
// The overall time complexity of this code is O(n log n).