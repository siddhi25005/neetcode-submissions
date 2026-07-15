class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& arr1, int src, int dst, int k) {
        priority_queue<pair<int,pair<int,int>>,
               vector<pair<int,pair<int,int>>>,
               greater<pair<int,pair<int,int>>>> pq;
        vector<int>dist(n,INT_MAX);
        vector<vector<pair<int,int>>> arr(n);
        for(auto &x : arr1){
    arr[x[0]].push_back({x[1], x[2]});
    }
        pq.push({0,{src,0}});
        dist[src]=0;
        while(!pq.empty()) {
            int stops=pq.top().first;
            int node=pq.top().second.first;
            int d=pq.top().second.second;
            pq.pop();
            if(stops>k) continue;
            for(auto &x:arr[node]) {
                int next=x.first;
                int weight=x.second;
                if(d+weight<dist[next]) {
                    dist[next]=d+weight;
                    pq.push({stops+1,{next,dist[next]}});
                }
            }
        }
        if(dist[dst]==INT_MAX) return -1;
        return dist[dst];
    }
};
