class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int n=arr.size();
        int c=0;
        for(int i=0;i<=n-k;i++) {
            int k1=k;
           int j=i;
           int sum=0;
                
                while(k1!=0) {
                sum=sum+arr[j];
               j++;
            k1--;
                }
                int avg=sum/k;
                if(avg>=t) c++;
            
        }
        return c;
    }
};