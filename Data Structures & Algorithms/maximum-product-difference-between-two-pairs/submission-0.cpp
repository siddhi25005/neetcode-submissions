class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        int maxip=INT_MIN;
        int minp=INT_MAX;
        int n=arr.size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
            maxip=max(maxip,arr[i]*arr[j]);
            minp=min(minp,arr[i]*arr[j]);
            }
        }
        return maxip-minp;
       
    }
};