class Solution {
public:
    void f(vector<vector<int>>&arr,int start,vector<int>&vis) {
        vis[start]=1;
        for(int i=0;i<arr.size();i++) {
            if(arr[start][i]==1 && vis[i]==0) f(arr,i,vis);
        }

    }
    int findCircleNum(vector<vector<int>>& arr) {
        int c=0;
        int n=arr.size();
        vector<int>vis(n,0);
        for(int i=0;i<n;i++) {
            if(vis[i]==0) {
            c++;
            f(arr,i,vis);
            }
        }
        return c;
        
    }
};