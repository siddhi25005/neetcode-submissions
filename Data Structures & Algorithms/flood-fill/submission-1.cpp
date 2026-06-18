class Solution {
public:
    void f(int sr,int sc,int color,vector<vector<int>>&arr,vector<vector<int>>&vis,int icolor) {
        vis[sr][sc]=1;
        arr[sr][sc]=color;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        int n=arr.size();
        int m=arr[0].size();
        
        
            for(int k=0;k<4;k++) {
                int nr=sr+dr[k];
                int nc=sc+dc[k];
                if(nr>=0 && nr<n && nc>=0 && nc<m && arr[nr][nc]==icolor && !vis[nr][nc]) {
                    arr[nr][nc]=color;
                    vis[nr][nc]=1;
                    f(nr,nc,color,arr,vis,icolor);
                }
            }

        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& arr, int sr, int sc, int color) {
        int n=arr.size(),m=arr[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        if(arr[sr][sc]==color) return arr;
        int icolor=arr[sr][sc];
        f(sr,sc,color,arr,vis,icolor);
        return arr;
        
    }
};