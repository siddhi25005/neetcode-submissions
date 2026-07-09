class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& arr1) {
        vector<vector<int>>arr(v);
        for(auto x:arr1) {
            arr[x[1]].push_back(x[0]);
        }
        vector<int>indegree(v,0);
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<v;i++) {
            for(int x:arr[i]) indegree[x]++;
        }
        for(int i=0;i<v;i++) {
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()) {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(int x:arr[node]) {
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }
        }
        if(ans.size()==v) return ans;
        return {};
    }
};
