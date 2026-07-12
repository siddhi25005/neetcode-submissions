class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
    vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
    queue<pair<int,pair<int,int>>>q;
    int i=0;
    int j=0;
    if(arr[0][0]==1 || arr[n-1][m-1]==1)
    return -1;
    q.push({1,{i,j}});
    dist[i][j]=1;
    int dr[]={-1,1,0,0,-1,-1,1,1};
    int dc[]={0,0,-1,1,-1,1,-1,1};
    while(!q.empty()) {
        int d=q.front().first;
        int i=q.front().second.first;
        int j=q.front().second.second;
        q.pop();
          if(i==n-1 && j==m-1) return d;
        for(int k=0;k<8;k++) {
            int ni=i+dr[k];
            int nj=j+dc[k];
            if(ni>=0 && ni<n && nj>=0 && nj<m && arr[ni][nj]!=1) {
                if(dist[i][j]+1<dist[ni][nj]) {
                dist[ni][nj]=dist[i][j]+1;
                q.push({dist[ni][nj],{ni,nj}});
                }
            }
        }
    }
  
    return -1;
    }
};