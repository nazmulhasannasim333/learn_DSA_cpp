#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> line;

    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            string s;
            cin >> s;
            line.push(s);
        }
        else if (cmd == 1)
        {
            if (!line.empty())
            {
                cout << line.front() << endl;
                line.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}