class Solution {
public:
    
    bool f(string &s,int i,int j) {
        while(i<j) {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void f1(string &s,int i,vector<string>&temp,vector<vector<string>>&ans) {
        if(i==s.size()) {
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<s.size();j++) {
            if(f(s,i,j)) {
                temp.push_back(s.substr(i,j-i+1));
                f1(s,j+1,temp,ans);
                temp.pop_back();
            }
        }
    }

    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        f1(s,0,temp,ans);
        return ans;
    }
};
