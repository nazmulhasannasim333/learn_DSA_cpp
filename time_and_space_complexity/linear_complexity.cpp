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
    return 0; //----------> O(1)
}

// The overall time complexity of this code is O(n).