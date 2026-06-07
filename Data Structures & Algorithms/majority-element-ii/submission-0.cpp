class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++) {
            mp[arr[i]]++;
        }
        vector<int>ans;
        for(auto x:mp) {
            if(x.second>n/3) ans.push_back(x.first);
        }
        return ans;
    }
};