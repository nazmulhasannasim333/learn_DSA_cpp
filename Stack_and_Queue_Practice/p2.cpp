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
    MyQueue q;
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
        q.push(x);
    }

    bool isEqual = true;

    if (s.size() != q.size())
    {
        isEqual = false;
    }
    else
    {
        while (!s.empty() && !q.empty())
        {
            if (s.top() != q.front())
            {
                isEqual = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }

    cout << (isEqual ? "YES" : "NO") << endl;

    return 0;
}