class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int x:arr) {
            mp[x]++;
        }
        for(auto x:mp) {
            if(x.second==1) return x.first;
        }
        return 0;
    }
};
