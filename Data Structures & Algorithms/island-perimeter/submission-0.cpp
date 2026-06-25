class Solution {
public:
   int f(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&vis) {
    queue<pair<int,int>>q;
    q.push({i,j});
    vis[i][j]=1;
    int n=arr.size(),m=arr[0].size();
    int dr[]={-1,1,0,0};
    int dc[]={0,0,-1,1};
    int c=0;
    while(!q.empty()) {
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        for(int k=0;k<4;k++) {
            int ni=i+dr[k];
            int nj=j+dc[k];
            if(ni<0 || ni>=n || nj<0 || nj>=m || arr[ni][nj]==0) {
                c++;

            }
            else if(!vis[ni][nj]) {
                vis[ni][nj]=1;
                q.push({ni,nj});
            }
        }
    }
    return c;
   }
    int islandPerimeter(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(arr[i][j]==1) {
                    return f(i,j,arr,vis);
                }
            }
        }
        return 0;
    }
};