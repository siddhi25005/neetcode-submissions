class Solution {
public:
   void f(string &s,int i,int dot,string temp,vector<string>&ans) {
    if(dot==4) {
    if(i==s.size()) {
        temp.pop_back();
        ans.push_back(temp);
    }
    return;
    }
    for(int len=1;len<=3;len++) {
        if(i+len>s.size()) break;
        string part=s.substr(i,len);
        if(part.size()>1 && part[0]=='0') continue;
        if(stoi(part)>255) continue;
        f(s,i+len,dot+1,temp+part+".",ans);

    }
   }
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        if(s.size()<4 || s.size()>12) return ans;
        f(s,0,0,"",ans);
        return ans;
    }
};