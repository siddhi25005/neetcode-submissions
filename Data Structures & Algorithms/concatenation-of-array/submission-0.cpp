class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
        int n=arr.size();
        vector<int>a(2*n);
        for(int i=0;i<n;i++) {
            a[i]=arr[i];
            a[n+i]=arr[i];
        }
        return a;
    }
};