class Solution {
public:
   int f(vector<int>&arr,int n,vector<int>&dp) {
   if(n==0) return arr[0];
   if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int pick=arr[n]+f(arr,n-2,dp);
    int npick=f(arr,n-1,dp);
    return dp[n]=max(pick,npick);
   }
    int rob(vector<int>& nums) {
         int n=nums.size();
        vector<int>dp(n,-1);
       
        return f(nums,n-1,dp);
    }
};
