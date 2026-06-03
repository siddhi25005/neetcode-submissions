class Solution {
public:
    int heightChecker(vector<int>&arr) {
        vector<int>arr1=arr;
        int c=0;
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr.size();i++) {
            if(arr[i]!=arr1[i]) c++;
        }
        return c;
    }
};