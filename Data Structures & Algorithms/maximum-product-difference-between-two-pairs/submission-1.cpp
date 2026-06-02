class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int maxp=arr[n-1]*arr[n-2];
        int minp=arr[0]*arr[1];
        return maxp-minp;
    }
};