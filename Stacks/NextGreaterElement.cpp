class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && st.top() <= arr[i]) st.pop();
            nge[i] = (st.size() > 0) ? st.top() : -1;
            st.push(arr[i]);
        }
        return nge;
    }
};
