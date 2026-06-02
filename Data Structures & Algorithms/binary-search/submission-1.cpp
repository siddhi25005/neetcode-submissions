class Solution {
public:
    int f(vector<int>&arr,int low,int high,int k) {
        int mid=(low+high)/2;
        if(low>high) return -1;
        if(arr[mid]==k) {
            return mid;
        }
        if(arr[mid]<k)
        return f(arr,mid+1,high,k);
        return f(arr,low,mid-1,k);
     
    }
    int search(vector<int>& arr, int k) {
        return f(arr,0,arr.size()-1,k);
    }
};
