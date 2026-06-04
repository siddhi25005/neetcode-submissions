class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int c=0;
        for(int i=0;i<n;i++) {
            int s=0;
            for(int j=i;j<n;j++) {
               
                    s+=arr[j];
                    if(s==k) c++;
                
            } 
        }
        return c;
    }
};