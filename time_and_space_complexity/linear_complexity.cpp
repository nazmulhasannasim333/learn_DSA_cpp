#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                       //----------> O(1)
    cin >> n;                    //----------> O(1)
    for (int i = 1; i <= n; i++) //----------> O(n)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n / 2; i++) //----------> O(n)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i += 2) //----------> O(n)
    {
        cout << i << " ";
    }
    return 0; //----------> O(1)
}

// Calculating the time complexity:
// 1. The first loop runs from 1 to n, which is O(n).
// 2. The second loop runs from 1 to n/2, which is O(n/2) but simplifies to O(n).
// 3. The third loop runs from 1 to n with a step of 2, which is also O(n/2) but simplifies to O(n).
// 4. The input and output operations are O(1) each.
// 5. The return statement is O(1).

// Therefore, the overall time complexity is O(n) + O(n) + O(n) + O(1) + O(1), = O(n+n+n+1+1) = O(n). --> we always ignore constant factors and lower order terms in Big O notation.

// The overall time complexity of this code is O(n).