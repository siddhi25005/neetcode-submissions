class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int n=s.size();
        for(int i=0;i<n;i++) {
            bool found=false;
            for(int j=0;j<n;j++) {
                if(s[i]==t[j]) {
                    t[j]='#';
                found= true;
                break;
                }
            }
             if(found==false) return false;
         
        }
            return true;
       
    }
};
