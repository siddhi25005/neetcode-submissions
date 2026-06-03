class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(char ch:s) {
            if(isalnum(ch)) temp+=tolower(ch); 
        }
        string t=temp;
        reverse(t.begin(),t.end());
        return t==temp;
   
    }
};
