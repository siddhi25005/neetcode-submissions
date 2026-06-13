class Solution {
public:
    int f(vector<vector<int>>&arr,vector<vector<int>>&dp) {
        int m=arr.size(),n=arr[0].size();
        if(arr[0][0]==1) return 0;
        dp[0][0]=1;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(i==0 && j==0) continue;
                if(arr[i][j]==1){
                    dp[i][j]=0;
                    continue;
                } 
                int top=0,left=0;
                if(i>0) top=dp[i-1][j];
                if(j>0) left=dp[i][j-1];
                dp[i][j]=top+left;
            }
        }
        return dp[m-1][n-1];
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m=arr.size(),n=arr[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(arr,dp);
    }
};