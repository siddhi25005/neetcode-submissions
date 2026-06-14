class Solution {
public:
    int f(vector<vector<int>>&arr,vector<vector<int>>&dp) {
        int m=arr.size(),n=arr[0].size();
       
        dp[0][0]=arr[0][0];
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(i==0 && j==0) continue;
                int top=1e9,left=1e9;
                if(i>0) top=dp[i-1][j];
                if(j>0) left=dp[i][j-1];
                dp[i][j]=arr[i][j]+min(top,left);
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