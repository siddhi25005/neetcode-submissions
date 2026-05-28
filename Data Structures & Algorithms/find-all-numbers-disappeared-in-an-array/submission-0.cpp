class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int>f(n+1,0);
        vector<int>ans;
        for(int i=0;i<n;i++) {
            f[arr[i]]++;
        }
        for(int i=1;i<=n;i++) {
            if(f[i]==0) ans.push_back(i);
        }
        return ans;
    }
};