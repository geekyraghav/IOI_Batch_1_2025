#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int calPoints(vector<string>& arr){
    stack<int> st;
    for(string s : arr){
        if(s=="C") st.pop();
        else if(s=="D") st.push(2*(st.top()));
        else if(s=="+"){
            int x = st.top();
            st.pop();
            int sum = x + st.top();
            st.push(x);
            st.push(sum);
        }
        else st.push(stoi(s));
    }
    int sum = 0;
    while(st.size()>0){
        sum += st.top();
        st.pop();
    }
    return sum;
}
int main(){
    vector<string> arr = {"8","1","D","3","4","C","+","+"};
    cout<<calPoints(arr)<<endl;
}