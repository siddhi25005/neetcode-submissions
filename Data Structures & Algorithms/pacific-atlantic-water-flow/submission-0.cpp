class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&vis) {
        int n=arr.size(),m=arr[0].size();
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        vis[i][j]=1;
        for(int k=0;k<4;k++) {
            int ni=i+dr[k];
            int nj=j+dc[k];
            if(ni>=0 && ni<n && nj>=0 && nj<m && !vis[ni][nj] && arr[ni][nj]>=arr[i][j]) {
                vis[ni][nj]=1;
                dfs(ni,nj,arr,vis);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
        vector<vector<int>>p(n,vector<int>(m,0));
         vector<vector<int>>a(n,vector<int>(m,0));
        for(int j=0;j<m;j++) {
                dfs(0,j,arr,p);            
        }
        for(int i=0;i<n;i++) {
            dfs(i,0,arr,p);
        }
        for(int j=0;j<m;j++) {
            dfs(n-1,j,arr,a);
        }
        for(int i=0;i<n;i++) {
            dfs(i,m-1,arr,a);
        }
        vector<vector<int>>ans;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(p[i][j] && a[i][j]) ans.push_back({i,j});
            }
        }
        return ans;

    }
};
