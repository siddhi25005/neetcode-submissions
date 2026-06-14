class Solution {
public:
    int f(vector<vector<int>>&arr,vector<vector<int>>&dp) {
        int m=arr.size(),n=arr[0].size();
        dp[0][0]=arr[0][0];
        for(int j=1;j<n;j++) {
            dp[0][j]=arr[0][j]+dp[0][j-1];
        }
        for(int i=1;i<m;i++) {
            dp[i][0]=arr[i][0]+dp[i-1][0];
        }
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                dp[i][j]=arr[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];

    }
    int minPathSum(vector<vector<int>>& arr) {
        int m=arr.size(),n=arr[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(arr,dp);
    }
};