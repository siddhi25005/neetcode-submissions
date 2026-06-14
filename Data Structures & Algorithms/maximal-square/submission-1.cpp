class Solution {
public:
    int f(vector<vector<char>>&arr,int i,int j,vector<vector<int>>&dp,int&maxi) {
        int m=arr.size(),n=arr[0].size();
        if(i>=m || j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(arr[i][j]=='0') return dp[i][j]=0;
        int down=f(arr,i+1,j,dp,maxi);
        int right=f(arr,i,j+1,dp,maxi);
        int diag=f(arr,i+1,j+1,dp,maxi);
        
        dp[i][j]=1+min(down,min(right,diag));
        maxi=max(maxi,dp[i][j]);
        
        return dp[i][j];
    }
    int maximalSquare(vector<vector<char>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int maxi=0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                maxi=max(maxi,f(arr,i,j,dp,maxi));
            }
        }
        
        return maxi*maxi;
    }
};