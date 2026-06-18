class Solution {
public:
    int orangesRotting(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        int fresh=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(arr[i][j]==2) {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else if(arr[i][j]==1) fresh++;
            }
        }
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        int rotton=0,time=0;
        while(!q.empty()) {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            time=max(time,t);
            for(int k=0;k<4;k++) {
                int nr=r+dr[k];
                int nc=c+dc[k];
                if(nr>=0 && nr<n && nc>=0 && nc<m && arr[nr][nc]==1 && !vis[nr][nc]) {
                    vis[nr][nc]=1;
                    arr[nr][nc]=2;
                    rotton++;
                    q.push({{nr,nc},t+1});
                }
            }
        }
        if(fresh!=rotton) return -1;
        return time;
    }
};
