class Solution {
public:
    int numEnclaves(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++) {
            if(arr[i][0]==1) {
                vis[i][0]=1;
                q.push({i,0});
            }
            if(arr[i][m-1]==1) {
                vis[i][m-1]=1;
                q.push({i,m-1});
            }
        }
        for(int j=0;j<m;j++) {
            if(arr[0][j]==1) {
                vis[0][j]=1;
                q.push({0,j});
            }
            if(arr[n-1][j]==1) {
                vis[n-1][j]=1;
                q.push({n-1,j});
            }
        }
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!q.empty()) {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int k=0;k<4;k++) {
                int nr=r+dr[k];
                int nc=c+dc[k];
                if(nr>=0 && nr<n && nc>=0 && nc<m && arr[nr][nc]==1 && !vis[nr][nc]) {
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(arr[i][j]==1 && !vis[i][j]) c++;
            }
        }
        return c;

        
    }
};