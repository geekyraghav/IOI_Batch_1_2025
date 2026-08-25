#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool validPair(char open, char close){
    if(open=='{' && close=='}') return true;
    else if(open=='(' && close==')') return true;
    else if(open=='[' && close==']') return true;
    else return false;
}
bool check(string& s){
    if(s.length() % 2 != 0) return false;
    stack<char> st;
    for(char ch : s){
        if(ch=='{' || ch=='(' || ch=='[') st.push(ch);
        else{
            if(st.size()==0) return false;
            if(validPair(st.top(),ch)) st.pop();
            else return false;
        }
    }
    return (st.size()==0);
}
int main(){
    string s = "{}([(])";
    cout<<check(s)<<endl;
}