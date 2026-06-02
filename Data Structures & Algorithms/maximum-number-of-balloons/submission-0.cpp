class Solution {
public:
    int maxNumberOfBalloons(string t) {
        map<char,int>mp;
        for(int i=0;i<t.size();i++) {
            mp[t[i]]++;
        }
        return min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
        }
};