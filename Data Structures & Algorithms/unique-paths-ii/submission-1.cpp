class Solution {
public:
   int f(vector<vector<int>>&arr,int i,int j,vector<vector<int>>&dp) {
    int m=arr.size();
    int n=arr[0].size();
          if(i>m-1 || j>n-1) return 0;
          if(arr[i][j]==1) return 0;
        if(i==m-1 && j==n-1) return 1;
     
        
        if(dp[i][j]!=-1) return dp[i][j];
        int down=f(arr,i+1,j,dp);
        int right=f(arr,i,j+1,dp);
        return dp[i][j]=down+right;
   }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
               int m=arr.size();
    int n=arr[0].size();
         vector<vector<int>>dp(m,vector<int>(n,-1));
  
        return f(arr,0,0,dp);
    }
};