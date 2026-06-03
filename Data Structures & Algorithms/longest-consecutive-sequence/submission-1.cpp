class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        if(n==0) return 0;
        int c=1;
        int maxi=1;
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++) {
         
                if(arr[i]==arr[i-1]) continue;
                else if(arr[i-1]+1==arr[i]) c++;
                else c=1;
                maxi=max(maxi,c);
            
        }
        return maxi;
    }
};
