class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>a(n);
    
        for(int i=0;i<n-1;i++) {
            int maxi=arr[i+1];
            for(int j=i+1;j<n;j++) {
                maxi=max(maxi,arr[j]);       
            }
            a[i]=maxi;
        }
             a[n-1]= -1;
        return a;
    }
};