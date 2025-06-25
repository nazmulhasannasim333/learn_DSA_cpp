#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        bool sorted = true;
        for (int i = 1; i < N; ++i)
        {
            if (A[i] < A[i - 1])
            {
                sorted = false;
                break;
            }
        }
        cout << (sorted ? "YES" : "NO") << endl;
    }
    return 0;
}