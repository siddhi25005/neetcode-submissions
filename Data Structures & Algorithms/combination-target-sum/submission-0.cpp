class Solution {
public:
    void f(vector<int>&arr,int t,vector<int>&temp,vector<vector<int>>&ans,int i) {
        if(t==0) {
             ans.push_back(temp);
             return;
        }
        if(i==arr.size()) {
           
            return;
        }
        if(arr[i]<=t) {
            temp.push_back(arr[i]);
            f(arr,t-arr[i],temp,ans,i);
            temp.pop_back();
        }
        
        f(arr,t,temp,ans,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(nums,target,temp,ans,0);
        return ans;
    }
};
