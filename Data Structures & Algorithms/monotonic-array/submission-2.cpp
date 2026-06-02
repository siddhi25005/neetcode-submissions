class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        bool inc=true;
        bool dic=true;
        for(int i=0;i<arr.size()-1;i++) {
            if(arr[i]>arr[i+1]) inc=false;
            if(arr[i]<arr[i+1]) dic=false;
        }
        return inc||dic;
    }
};