class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>st;
        for(int x:arr) {
            if(st.count(x)>0) return true;
            st.insert(x);
        }
        return false;
    }
};