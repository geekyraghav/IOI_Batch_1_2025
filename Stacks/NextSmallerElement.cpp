class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(st.size() > 0 && st.top() >= arr[i]) st.pop();
            if(st.size() == 0) nse[i] = -1;
            else nse[i] = st.top();
            st.push(arr[i]);
        }
        return nse;
    }
};
