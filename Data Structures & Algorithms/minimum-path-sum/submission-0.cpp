class Solution {
public:
    int f(vector<vector<int>>&arr,int i,int j,vector<vector<int>>&dp) {
        int m=arr.size(),n=arr[0].size();
        if(i==m-1 && j==n-1) return arr[i][j];
        if(i>=m || j>=n) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int right=f(arr,i,j+1,dp);
        int bottom=f(arr,i+1,j,dp);
        return dp[i][j]=arr[i][j]+min(right,bottom);
    }
    int minPathSum(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(arr,0,0,dp);
    }
};