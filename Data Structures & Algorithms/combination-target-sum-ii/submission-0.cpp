class Solution {
public:
   void f(vector<int>&arr,int t,vector<vector<int>>&ans,vector<int>&temp,int i) {
    if(t==0) {
        ans.push_back(temp);
        return;
    }
    sort(arr.begin(),arr.end());
    if(i==arr.size()) return;
    for(int j=i;j<arr.size();j++) {
        if(j>i && arr[j]==arr[j-1]) continue;
        if(arr[j]>t) break;
        temp.push_back(arr[j]);
        f(arr,t-arr[j],ans,temp,j+1);
        temp.pop_back();
    }
   }
    vector<vector<int>> combinationSum2(vector<int>& arr, int t) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(arr,t,ans,temp,0);
        return ans;
    }
};
