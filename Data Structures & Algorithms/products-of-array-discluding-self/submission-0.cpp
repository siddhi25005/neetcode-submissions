class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++) {
            int pro=1;
            for(int j=0;j<n;j++) {
                if(i!=j) pro=pro*arr[j];
            }
            ans[i]=pro;
        }
        return ans;
    }
};
