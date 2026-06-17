class Solution {
public:
    bool f(vector<int>&arr,int i,int k,vector<vector<int>>&dp) {
        if(k==0) return true;
        if(i==arr.size()) return false;
        if(dp[i][k]!=-1) return dp[i][k];
        bool pick=false;
        if(k>=arr[i]) pick=f(arr,i+1,k-arr[i],dp);
        bool npick=f(arr,i+1,k,dp);
        return dp[i][k]=pick||npick;
    }
    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int x:arr) sum+=x;
        if(sum%2!=0) return false;
        int k=sum/2;
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        if(f(arr,0,k,dp)) return true;
        return false;
    }
};
