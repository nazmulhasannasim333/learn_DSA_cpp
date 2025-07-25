#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> l;

    void push(int x)
    {
        l.push_back(x);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n, m;
    cin >> n;
    MyStack s;
    MyStack s2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s2.push(x);
    }

    bool isEqual = true;
    if (s.size() != s2.size())
    {
        isEqual = false;
    }
    else
    {
        while (!s.empty() && !s2.empty())
        {
            if (s.top() != s2.top())
            {
                isEqual = false;
                break;
            }
            s.pop();
            s2.pop();
        }
    }
    if (isEqual)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}