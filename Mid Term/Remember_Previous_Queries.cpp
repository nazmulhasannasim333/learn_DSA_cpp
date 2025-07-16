#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> &lst)
{
    cout << "L ->";
    for (int v : lst)
        cout << " " << v;
    cout << endl;

    cout << "R ->";
    lst.reverse();
    for (int v : lst)
        cout << " " << v;
    cout << endl;
    lst.reverse();
}

int main()
{
    int t;
    cin >> t;
    list<int> lst;
    while (t--)
    {
        int x;
        long long val;
        cin >> x >> val;
        if (x == 0)
        {
            lst.push_front(val);
        }
        else if (x == 1)
        {
            lst.push_back(val);
        }
        else if (x == 2)
        {
            if (val >= 0 && val < lst.size())
            {
                auto it = lst.begin();
                for (int i = 0; i < val; i++)
                {
                    it++;
                }
                lst.erase(it);
            }
        }
        print_list(lst);
    }
    return 0;
}