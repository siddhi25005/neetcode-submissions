class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        set<vector<int>>st;
        int n=arr.size();
        for(int i=0;i<n;i++) {
                    map<int,int>mp;

            for(int j=i+1;j<n;j++) {
                
                int k=-(arr[i]+arr[j]);
                if(mp.find(k)!=mp.end()) {
                    vector<int>temp={arr[i],arr[j],k};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                mp[arr[j]]++;
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
