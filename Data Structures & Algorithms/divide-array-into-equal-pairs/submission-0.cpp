class Solution {
public:
    bool divideArray(vector<int>& arr) {
        int n=arr.size();
        int c=0;
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            mp[arr[i]]++;
        }
        for(auto x:mp) {
            if(x.second%2!=0) return false;
        }
        return true;
    }
};