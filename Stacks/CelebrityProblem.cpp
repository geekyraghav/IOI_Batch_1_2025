class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // if arr[i][j] == 1, it means i knows j
        int n = mat.size();
        stack<int> st;
        for(int i=0;i<n;i++) st.push(i);
        while(st.size() > 1){
            int i = st.top();
            st.pop();
            int j = st.top();
            st.pop();
            if(mat[i][j]==0 && mat[j][i]==1) st.push(i);
            if(mat[j][i]==0 && mat[i][j]==1) st.push(j);
        }
        if(st.size() == 0) return -1;
        int celeb = st.top();
        // now check row and col of celeb
        for(int j=0;j<n;j++){
            if(j == celeb) continue;
            if(mat[celeb][j] == 1) return -1;
        }
        for(int i=0;i<n;i++){
            if(i == celeb) continue;
            if(mat[i][celeb] == 0) return -1;
        }
        return celeb;
    }
};
