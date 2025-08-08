#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    string name;
    int num;

    Pair(string name, int num)
    {
        this->name = name;
        this->num = num;
    }
};

class cmp
{
public:
    bool operator()(Pair l, Pair r)
    {
        if (l.name == r.name)
        {
            return l.num < r.num;
        }
        return l.name > r.name;
    }
};

int main()
{
    priority_queue<Pair, vector<Pair>, cmp> pq;

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string name;
        int num;
        cin >> name >> num;
        Pair p(name, num);
        pq.push(p);
    }
    while (!pq.empty())
    {
        Pair p = pq.top();
        cout << p.name << " " << p.num << endl;
        pq.pop();
    }
    return 0;
}