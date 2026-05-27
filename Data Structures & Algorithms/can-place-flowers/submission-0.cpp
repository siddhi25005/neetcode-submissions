class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int m) {
        int n=arr.size();
        int c=0;
       for(int i=0;i<n;i++) {
        if(arr[i]==0 && (i==0 || arr[i-1]==0 ) && (i==n-1 || arr[i+1]==0)) {
            arr[i]=1;
            c++;
       }
       }
       return c>=m;
    }
};