#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
    stack<int> helper;
    while(st.size() > 0){
        // cout<<st.top()<<" ";
        helper.push(st.top());
        st.pop();
    }
    while(helper.size() > 0){
        cout<<helper.top()<<" ";
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;
}
int get(stack<int>& st, int idx){
    if(idx<0 || idx>=st.size()){
        cout<<"Invalid Index"<<endl;
        return -1;
    }
    stack<int> helper;
    while(st.size() > idx+1){
        helper.push(st.top());
        st.pop();
    }
    int ans = st.top();
    while(helper.size() > 0){
        st.push(helper.top());
        helper.pop();
    }
    return ans;
}
void push(stack<int>& st, int idx, int val){
    if(idx<0 || idx>st.size()){
        cout<<"Invalid Index"<<endl;
        return;
    }
    stack<int> helper;
    while(st.size() > idx){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size() > 0){
        st.push(helper.top());
        helper.pop();
    }
}
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10); st.push(20);
    st.push(30); st.push(40);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.push(80);
    print(st);
    push(st,2,100);
    print(st);
}