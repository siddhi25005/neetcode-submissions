class Solution {
public: 
    vector<int>f(vector<int>&arr) {
        next_permutation(arr.begin(),arr.end());
        return arr;
    }
    void nextPermutation(vector<int>& arr) {
        f(arr);
    }
};