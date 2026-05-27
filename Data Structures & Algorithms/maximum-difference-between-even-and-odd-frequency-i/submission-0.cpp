class Solution {
public:
    int maxDifference(string s) {
        map<char,int>mp;
        int even=1e9,odd=0;
        for(int i=0;i<s.size();i++) {
            mp[s[i]]++;
        }
        for(auto x:mp) {
            if(x.second%2==0) even=min(even,x.second);
            else odd=max(odd,x.second);
        }
        return odd-even;
    }
};