class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n=num.size();
        for(int i=2;i<n;i++) {
            if(num[i]==num[i-1] && num[i-1]==num[i-2]) {
                string cur(3, num[i]);
                ans=max(ans,cur);
            }
        }
        return ans;
    }
};