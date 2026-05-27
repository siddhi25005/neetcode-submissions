class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        
        for(int i=0;i<n;i++) {
            mp[arr[i]]++;
        }
        int ans=-1;
        for(auto x:mp) {
            if(x.first==x.second) ans=max(ans, x.first);
        }
        return ans ;
    }
};