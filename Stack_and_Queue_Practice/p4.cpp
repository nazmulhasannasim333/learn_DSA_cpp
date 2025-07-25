#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    queue<int> reverse_q;
    while(!s.empty()){
        reverse_q.push(s.top());
        s.pop();
    }
    while(!reverse_q.empty()){
        cout << reverse_q.front() << " ";
        reverse_q.pop();
    }
    return 0;
}