class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
        int low=0,high=arr.size()-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(arr[mid]==k) return mid;
            if(arr[mid]<k) {
                low=mid+1;
                
            }
            else high=mid-1;
            
        }
        return low;
    }
};