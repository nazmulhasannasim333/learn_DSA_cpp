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
    bool empty()
    {
        return l.empty();
    }
    int size()
    {
        return l.size();
    }
};

class MyQueue
{
public:
    list<int> l;

    void push(int x)
    {
        l.push_back(x);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty();
    }
    int size()
    {
        return l.size();
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    MyStack s;
    MyQueue q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool same = true;
    if (s.size() != q.size())
    {
        same = false;
    }
    else
    {
        while (!s.empty() && !q.empty())
        {
            if (s.top() != q.front())
            {
                same = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }
    if (same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}