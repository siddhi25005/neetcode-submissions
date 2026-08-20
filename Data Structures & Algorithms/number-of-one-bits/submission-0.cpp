class Solution {
public:
    int hammingWeight(uint32_t n) {
        string s="";
        while(n>0) {
            s+=char('0'+(n%2));
            n=n/2;
        }
        int c=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='1') c++;
        }
        return c;
    }
};
