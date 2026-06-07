class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int c=0,el=0;
        for(int x:arr) {
            if(c==0) el=x;
            if(x==el) c++;
            else c--;
        }
        return el;
    }
};