class Solution {
public:
    int search(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(arr[mid]==k) return mid;
            else if(arr[mid]<k) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};
