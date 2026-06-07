class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        int c=0;
        vector<int>ans;
        for(int i=0;i<n;i++) {
            bool found=false;
            for(int x:ans) {
                if(x==arr[i]) {
                    found=true;
                    break;
                }
            }
            if(found) continue;
            c=0;
            for(int j=0;j<n;j++) {
                if(arr[i]==arr[j]) c++;
            }
            if(c>n/3) ans.push_back(arr[i]);
        }
        return ans;
    }
};