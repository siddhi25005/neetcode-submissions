class Solution {
public:
    void solve(vector<vector<char>>& arr) {
        int n=arr.size(),m=arr[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++) {
            if(arr[i][0]=='O') {
                arr[i][0]='O';
                vis[i][0]=1;
                q.push({i,0});
            }
            if(arr[i][m-1]=='O') {
                arr[i][m-1]='O';
                vis[i][m-1]=1;
                q.push({i,m-1});
            }
        }
        for(int j=0;j<m;j++) {
            if(arr[0][j]=='O') {
                arr[0][j]='O';
                vis[0][j]=1;
                q.push({0,j});
        }
        if(arr[n-1][j]=='O') {
            arr[n-1][j]='O';
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
                if(nr>=0 && nr<n && nc>=0 && nc<m && arr[nr][nc]=='O' && !vis[nr][nc]) {
                    arr[nr][nc]='O';
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(arr[i][j]=='O' && !vis[i][j]) {
                    arr[i][j]='X';
                }
            }
        }
    }
};
