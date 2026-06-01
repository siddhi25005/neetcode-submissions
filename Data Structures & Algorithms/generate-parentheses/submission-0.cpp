class Solution {
public:
    void f(int n,int o,int c,string temp,vector<string>&ans) {
        if(temp.size()==2*n) {
            ans.push_back(temp);
            return;
        }
        if(o<n) {
    
        f(n,o+1,c,temp+'(',ans);
        }
        if(c<o) {
        f(n,o,c+1,temp+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        f(n,0,0,temp,ans);
        return ans;
    }
};
