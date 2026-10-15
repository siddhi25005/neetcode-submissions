class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++) {
            sum+=arr[i];
        }
        int c=0;
        if((sum/k)>=t) c=1;
        for(int i=k;i<n;i++) {
            sum=sum-arr[i-k]+arr[i];
            if((sum/k)>=t) c++;
        }
        return c;
    }
};