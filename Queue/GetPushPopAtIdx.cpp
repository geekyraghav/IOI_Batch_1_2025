#include<iostream>
#include<queue>
using namespace std;
void print(queue<int>& q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
void pop(queue<int>& q, int idx){
    int n = q.size();
    for(int i=1;i<=idx;i++){
        q.push(q.front());
        q.pop();
    }
    q.pop();
    for(int i=1;i<=n-1-idx;i++){
        q.push(q.front());
        q.pop();
    }
}
int get(queue<int>& q, int idx){
    int n = q.size();
    for(int i=1;i<=idx;i++){
        q.push(q.front());
        q.pop();
    }
    int ans = q.front();
    for(int i=1;i<=n-idx;i++){
        q.push(q.front());
        q.pop();
    }
    return ans;
}
int main(){
    queue<int> q;
    q.push(20); q.push(70); q.push(30);
    q.push(40); q.push(50); q.push(90);
    print(q);
    // cout<<get(q,2)<<endl;
    pop(q,3);
    print(q);
}