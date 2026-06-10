class Solution {
public:
    void f(vector<int>&a,vector<string>&s,int i,string temp,vector<string>&ans) {
        if(i==a.size()) {
            ans.push_back(temp);
            return;
        }
        string letter=s[a[i]];
        for(char ch:letter) {
            f(a,s,i+1,temp+ch,ans);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string>s={"","","abc","def","ghi","jkl","mno",
        "pqrs","tuv","wxyz"};
        vector<int>a;
        for(int i=0;i<digits.size();i++) {
            a.push_back(digits[i]-'0');
        }
        vector<string>ans;
        string temp;
        f(a,s,0,temp,ans);
        return ans;
    }
};
