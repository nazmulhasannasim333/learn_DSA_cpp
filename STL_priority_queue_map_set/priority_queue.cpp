#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.push(30);
    pq.push(2);

    cout << pq.top() << endl;
    cout << pq.size() << endl;
    return 0;
}