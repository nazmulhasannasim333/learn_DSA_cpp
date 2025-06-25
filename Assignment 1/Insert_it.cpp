// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int m;
//     cin >> m;
//     vector<int> arr2(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }

//     int x;
//     cin >> x;
//     for (int i = 0; i < x; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cout << arr2[i] << " ";
//     }
//     for (int i = x; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int x;
    cin >> x;
    arr.insert(arr.begin() + x, arr2.begin(), arr2.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}