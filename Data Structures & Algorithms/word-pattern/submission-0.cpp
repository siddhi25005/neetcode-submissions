class Solution {
public:
    bool wordPattern(string p, string s) {
        string temp="";
        vector<string>word;
        for(char ch:s) {
            if(ch!=' ') {
                temp+=ch;
            }
            else {
                if(temp!="") {
                    word.push_back(temp);
                    temp="";
                }
            }
        }
        if(temp!="") word.push_back(temp);
        if(p.size()!=word.size()) return false;
        map<char,string>mp1;
        map<string,char>mp2;
        for(int i=0;i<p.size();i++) {
            char c=p[i];
            string w=word[i];
            if(mp1.count(c) && mp1[c]!=w) return false;
            if(mp2.count(w) && mp2[w]!=c) return false;
            mp1[c]=w;
            mp2[w]=c;
        }
        return true;
    }
};