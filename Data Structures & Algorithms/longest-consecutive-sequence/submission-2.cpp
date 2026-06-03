class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int>st;
        for(int x:arr) {
            st.insert(x);
        }
        int maxi=0;
        for(int x:arr) {
            if(st.find(x-1)==st.end()) {
                int curr=x;
                int len=1;
                while(st.find(curr+1)!=st.end()) {
                    curr=curr+1;
                    len=len+1;
                }
                 maxi=max(maxi,len);
            }
           
        }
        return maxi;
    }
};
