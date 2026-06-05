class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        vector<vector<int>>ans(arr.size(),vector<int>(arr[0].size(),0));
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i=0;i<n;i++) {
            reverse(arr[i].begin(),arr[i].end());
        }
    }
};
