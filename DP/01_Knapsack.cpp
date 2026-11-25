class Solution {
  public:
    int loot(int i, int c, vector<int> &val, vector<int> &wt, vector<vector<int>>& dp){ // i -> 0 to n-1, c -> c to 0
        if(i == val.size()) return 0;
        if(dp[i][c] != -1) return dp[i][c];
        if(wt[i] > c){
            int skip = loot(i+1,c,val,wt,dp);
            return dp[i][c] = skip;
        }
        else{
            int skip = loot(i+1,c,val,wt,dp);
            int pick = val[i] + loot(i+1,c-wt[i],val,wt,dp);
            return dp[i][c] = max(skip,pick);
        }
    }
    int knapsack(int c, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        vector<vector<int>> dp(n,vector<int>(c+1,-1));
        return loot(0,c,val,wt,dp);
    }
};
