class Solution {
public:
    int countSeniors(vector<string>& s) {
        int c=0;
        for(int i=0;i<s.size();i++) {
            int age=(s[i][11]-'0')*10+(s[i][12]-'0');
            if(age>60) c++;
        }
        return c;
    }
};