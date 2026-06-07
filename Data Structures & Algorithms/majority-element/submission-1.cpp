class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            mp[arr[i]]++;
        }
        int maxi=0;
        for(auto x:mp) {
            if(x.second>n/2) maxi=x.first;
        }
        return maxi;
    }
};