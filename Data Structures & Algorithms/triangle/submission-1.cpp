class Solution {
public:
    int f(vector<vector<int>>&arr) {
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++) {
            dp[n-1][i]=arr[n-1][i];
        }
        for(int i=n-2;i>=0;i--) {
            for(int j=i;j>=0;j--) {
                int down=dp[i+1][j];
                int right=dp[i+1][j+1];
                dp[i][j]=arr[i][j]+min(down,right);
            }
        }
        return dp[0][0];
       
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        return f(triangle);
    }
};