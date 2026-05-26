class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++) {
            int target=k-arr[i];
            if(mp.find(target)!=mp.end()) return {mp[target],i};
            mp[arr[i]]=i;
        }
        return {};

    }
};
