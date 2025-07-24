#include <bits/stdc++.h>
using namespace std;

bool is_valid(string &s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '0' || c == '1')
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }
    return st.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int res = is_valid(s);
        if (res)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}