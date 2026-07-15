class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        priority_queue<pair<int,pair<int,int>>,
               vector<pair<int,pair<int,int>>>,
               greater<pair<int,pair<int,int>>>> pq;
        dist[0][0]=0;
        pq.push({dist[0][0],{0,0}});
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!pq.empty()) {
            int d=pq.top().first;
            int i=pq.top().second.first;
            int j=pq.top().second.second;
            pq.pop();
            if(d>dist[i][j]) continue;
            if(i==n-1 && j==m-1) return d;
            for(int k=0;k<4;k++) {
                int ni=i+dr[k];
                int nj=j+dc[k];
                if(ni>=0 && ni<n && nj>=0 && nj<m) {
                    int value=abs(arr[i][j]-arr[ni][nj]);
                    int maxi=max(d,value);
                    if(maxi<dist[ni][nj]) {
                        dist[ni][nj]=maxi;
                        pq.push({dist[ni][nj],{ni,nj}});
                    }
                }
            }
        }
        return 0;
    }
};