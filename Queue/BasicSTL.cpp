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
int main(){
    queue<int> q;
    q.push(10); q.push(20); q.push(30);
    print(q);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    print(q);
    cout<<q.front()<<endl;
}