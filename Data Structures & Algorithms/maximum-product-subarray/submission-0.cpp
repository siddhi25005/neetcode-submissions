class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int maxi=arr[0],mini=arr[0],ans=arr[0];
        for(int i=1;i<n;i++) {
            if(arr[i]<0) swap(maxi,mini);
                maxi=max(arr[i],arr[i]*maxi);
                mini=min(arr[i],arr[i]*mini);
                ans=max(maxi,ans);
            
        }
        return ans;
    }
};
