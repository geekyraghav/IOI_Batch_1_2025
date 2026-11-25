class Solution {
  public:
    // int f(int n, vector<int>& dp) {
    //     if(n<=2) return n;
    //     if(dp[n] != -1) return dp[n];
    //     return dp[n] = f(n-1,dp) + (n-1)*f(n-2,dp);
    // }
    // int countFriendsPairings(int n) {
    //     vector<int> dp(n+1,-1);
    //     return f(n,dp);
    // }
    
    int countFriendsPairings(int n) {
        if(n<=2) return n;
        vector<int> dp(3);
        dp[0] = 1;
        dp[1] = 2;
        for(int i=3;i<=n;i++){
            dp[2] = dp[1] + (i-1)*dp[0];
            dp[0] = dp[1];
            dp[1] = dp[2];
        }
        return dp[2];
    }
};
