#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
    vector<int> v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    bool empty(){
        return v.empty();
    }
    int size(){
        return v.size();
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}