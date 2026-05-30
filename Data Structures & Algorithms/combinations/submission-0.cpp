class Solution {
public:
   void f(int n,int k,int i,vector<vector<int>>&ans,vector<int>&temp) {
    if(temp.size()==k) {
        ans.push_back(temp);
        return;
    }
    for(int j=i;j<=n;j++) {
        temp.push_back(j);
        f(n,k,j+1,ans,temp);
        temp.pop_back();
    }
   }
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>>ans;
    vector<int>temp;
    f(n,k,1,ans,temp);
    return ans;
    }
};