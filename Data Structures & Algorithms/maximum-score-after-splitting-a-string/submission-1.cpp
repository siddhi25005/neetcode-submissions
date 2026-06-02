class Solution {
public:
    int maxScore(string s) {
        int leftz=0;
        int righto=0;
        for(char ch:s) {
            if(ch=='1') righto++;
        }
        int maxi=0;
        for(int i=0;i<s.size()-1;i++) {
            if(s[i]=='0') leftz++;
            else righto--;
            maxi=max(maxi,leftz+righto);
        }
        return maxi;
        
    }
};