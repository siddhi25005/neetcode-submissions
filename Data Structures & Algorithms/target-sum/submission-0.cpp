class Solution {
public:
   int f(vector<int>&arr,int i,int k,vector<vector<int>>&dp,int s1) {
    if(k > s1 || k < -s1) return 0;

    if(i==arr.size()) return k==0;
    if(dp[i][s1+k]!=-1) return dp[i][s1+k];
    int plus=f(arr,i+1,k-arr[i],dp,s1);
    int minus=f(arr,i+1,k+arr[i],dp,s1);
    return dp[i][s1+k]=plus+minus;
   }
    int findTargetSumWays(vector<int>& arr, int k) {
        int n=arr.size();
        int sum=0;
        for(int x:arr) sum+=x;
        int s1=sum;
        vector<vector<int>>dp(n,vector<int>(2*sum+1,-1));
        return f(arr,0,k,dp,s1);
    }
};
