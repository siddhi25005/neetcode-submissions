class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size(),m=arr2.size();
        vector<int>ans;
        for(int i=0;i<n;i++) {
            int j=0;
            for(j=0;j<m;j++) {
                if(arr1[i]==arr2[j]) break;
            }
            int mini=-1;
            for(int k=j+1;k<m;k++) {
                if(arr1[i]<arr2[k]) {
                    mini=arr2[k];
                    break;
                }
            }
            ans.push_back(mini);
        }
        return ans;
    }
};