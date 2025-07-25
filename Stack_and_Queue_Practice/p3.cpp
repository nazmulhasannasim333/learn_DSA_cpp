#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.push(x);
    }
   stack <int> copy_s = s;
   
   stack<int> temp;
   while(!copy_s.empty()){
       temp.push(copy_s.top());
       copy_s.pop();
    }
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}