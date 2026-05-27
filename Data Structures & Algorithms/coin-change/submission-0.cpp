class Solution {
public:
    int f(vector<int>&arr,int n,int k) {
        if(n==0) {
            if(k%arr[0]==0) return k/arr[0];
            return 1e9;
        }
        int pick=1e9;
        if(k>=arr[n])
        pick=1+f(arr,n,k-arr[n]);
        int npick=f(arr,n-1,k);
        return min(pick,npick);
    }
    int coinChange(vector<int>& arr, int k) {
        int ans= f(arr,arr.size()-1,k);
          if(ans>=1e9)
            return -1;

        return ans;
    }
};
