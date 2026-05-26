class Solution {
public:
    bool f(vector<int>&arr,int k,vector<vector<int>>&dp) {
        int n=arr.size();
        for(int i=0;i<n;i++) {
            dp[i][0]=true;
        }
        if(arr[0]<=k)
        dp[0][arr[0]]=true;
        for(int i=1;i<n;i++) {
            for(int j=1;j<=k;j++) {
                bool pick=false;
                bool npick=dp[i-1][j];
                if(j>=arr[i]) pick=dp[i-1][j-arr[i]];
                dp[i][j]=pick||npick;
            }
        }
        return dp[n-1][k];
    }
    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int x:arr) sum+=x;
        if(sum%2!=0) 
        {
            return false;
        }
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,false));
        return f(arr,target,dp);

    }
};
