class Solution {
public:
    void f(vector<int>&arr,int i,vector<int>&temp,vector<vector<int>>&ans){
 
            ans.push_back(temp);
        
        
        for(int j=i;j<arr.size();j++) {
        if(j>i && arr[j]==arr[j-1]) continue;
      
        temp.push_back(arr[j]);
        f(arr,j+1,temp,ans);
        temp.pop_back();
        
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
     
        vector<int>temp;
        sort(nums.begin(),nums.end());
        f(nums,0,temp,ans);
        return ans;

    }
};
