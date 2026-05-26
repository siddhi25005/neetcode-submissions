class Solution {
public:
   int f(vector<int>&arr) {
    int n=arr.size();
    if(n==1) return arr[0];
    
    vector<int>dp(n,-1);
   
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++) {
        dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
    }
    return dp[n-1];
   }
    int rob(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr[0];
        vector<int>a,b;
        for(int i=0;i<n-1;i++) a.push_back(arr[i]);
        for(int i=1;i<n;i++) b.push_back(arr[i]);
        return max(f(a),f(b));
    }
};
