#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> values;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        values.push_back(val);
    }
    values.sort();
    values.unique();

    for (int value : values)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}