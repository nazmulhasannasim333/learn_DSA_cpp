#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> addresses;
    string addr;
    while (true)
    {
        cin >> addr;
        if (addr == "end")
            break;
        addresses.push_back(addr);
    }
    int t;
    cin >> t;
    string cmd, param;

    auto curr = addresses.begin();

    for (int i = 0; i < t; i++)
    {
        cin >> cmd;
        if (cmd == "visit")
        {
            cin >> param;
            auto it = addresses.begin();
            bool found = false;
            while (it != addresses.end())
            {
                if (*it == param)
                {
                    found = true;
                    break;
                }
                it++;
            }
            if (found)
            {
                curr = it;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            auto tmp = curr;
            tmp++;
            if (tmp != addresses.end())
            {
                curr = tmp;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (curr != addresses.begin())
            {
                curr--;
                cout << *curr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}