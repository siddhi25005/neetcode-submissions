class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size();
        int m=s.size();
        int start=0;
        for(int i=0;i<m;i++) {
            bool found=false;
            for(int j=start;j<n;j++) {
                if(s[i]==t[j]) {
                    found=true;
                    start=j+1;
                    break;
                }
            }
            if(found==false) return false;
        }
        return true;
    }
};