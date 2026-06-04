class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        int sum=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(i==j) sum+=arr[i][j];
                else if(i+j==n-1) sum+=arr[i][j];
            }
        }
        return sum;
    }
};