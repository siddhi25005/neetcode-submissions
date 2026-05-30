class Solution {
public:
    void f(vector<int>&arr,vector<bool>&vis,vector<int>&temp,vector<vector<int>>&ans) {
        if(temp.size()==arr.size()) {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<arr.size();i++) {
            if(vis[i]) continue;
            if(i>0 && arr[i]==arr[i-1] && !vis[i-1]) continue;
            vis[i]=true;
            temp.push_back(arr[i]);
            f(arr,vis,temp,ans);
            temp.pop_back();
            vis[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<bool>vis(nums.size(),false);
        vector<int>temp;
        f(nums,vis,temp,ans);
        return ans;
    }
};