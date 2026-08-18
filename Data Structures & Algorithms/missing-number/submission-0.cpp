class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        vector<int>dis(n+1);
        for(int i=0;i<n;i++) {
            dis[arr[i]]++;
        }
        for(int i=0;i<dis.size();i++) {
            if(dis[i]==0) return i;
        }
        return 0;
    }
};
