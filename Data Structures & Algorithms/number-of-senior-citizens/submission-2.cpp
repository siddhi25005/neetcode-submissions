class Solution {
public:
    int countSeniors(vector<string>&s) {
        string temp="";
        for(int i=0;i<s.size();i++) {
            temp+=s[i];
        }
        int c=0;
        for(int i=0;i<temp.size();i++) {
            if((temp[i]=='F' || temp[i]=='M' || temp[i]=='O') && i+2<temp.size()) {
                int ans=(temp[i+1]-'0')*10+(temp[i+2]-'0');
                if(ans>60) c++; 
            }
        }
        return c;
    }
};