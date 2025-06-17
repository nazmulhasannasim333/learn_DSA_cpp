#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                             // ----> O(1)
    cin >> n;                          // ----> O(1)
    for (int i = 1; i <= sqrt(n); i++) // ----> O(sqrt(n))
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }
    return 0;
}

//  i * i <= n or i <= sqrt(n) is the square root complexity condition.

// Summery of complexities:
// O(1) + O(1) + O(sqrt(n)) + O(1) = O(sqrt(n))

// The overall time complexity of this code is O(sqrt(n)).