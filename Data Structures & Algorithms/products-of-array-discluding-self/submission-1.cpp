class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,1);
        int p=1;
        for(int i=0;i<n;i++) {
            ans[i]=p;
            p*=arr[i];
        }
        int s=1;
        for(int i=n-1;i>=0;i--) {
            ans[i]*=s;
            s*=arr[i];
        }
        return ans;
    }
};
