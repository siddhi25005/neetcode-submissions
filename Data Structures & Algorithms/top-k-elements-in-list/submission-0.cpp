class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        int n=arr.size();
         int c=0;
       map<int,int>mp;
       for(int i=0;i<n;i++) {
        mp[arr[i]]++;
       }
       vector<int>ans;
       while(k--) {
        int key=0,value=0;
        for(auto x:mp) {
            if(x.second>value) {
                key=x.first;
                value=x.second;
            }
        }
            ans.push_back(key);
            mp[key]=0;
        
       }
       return ans;
    }
};
