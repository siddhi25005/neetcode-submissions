class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
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
        return word.back().size();
    }
};