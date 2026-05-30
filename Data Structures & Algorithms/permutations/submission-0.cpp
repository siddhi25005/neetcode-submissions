class Solution {
public:
   void f(vector<int>&arr,vector<bool>vis,vector<vector<int>>&ans,vector<int>&temp) {
    if(temp.size()==arr.size()) {
        ans.push_back(temp);
        return;
    }
     for(int i=0;i<arr.size();i++) {
        if(vis[i]) continue;
        vis[i]=true;
        temp.push_back(arr[i]);
        f(arr,vis,ans,temp);
        temp.pop_back();
        vis[i]=false;
     }
    
   }
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>vis(arr.size(),false);
        f(arr,vis,ans,temp);
        return ans;
    }
};
