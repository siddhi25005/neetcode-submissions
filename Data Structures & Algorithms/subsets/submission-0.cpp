class Solution {
public:
    void f(vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans,int i) {
        if(i==arr.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[i]);
        f(arr,temp,ans,i+1);
        temp.pop_back();
        f(arr,temp,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(arr,temp,ans,0);
        return ans;
    }
};
