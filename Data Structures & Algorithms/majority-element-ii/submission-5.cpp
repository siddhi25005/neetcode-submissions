class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        int c1=0,c2=0;
        int el1=0,el2=0;
        for(int x:arr) {
            if(c1==0 && el2!=x) {
                 el1=x; 
                c1=1;
            }
            else if(c2==0 && el1!=x) {
                el2=x;
                c2=1;
            }
            else if(el1==x) {
               
                c1++;
            }
            else if(el2==x) {
                
                c2++;
            }
            else {
                c1--;
                c2--;
            }
        }
        vector<int>ls;
        c1=0;
        c2=0;
        for(int i=0;i<arr.size();i++) {
            if(el1==arr[i]) c1++;
            else if(el2==arr[i]) c2++;
        }
        int mini=(int)(n/3)+1;
        if(c1>=mini) ls.push_back(el1);
        if(c2>=mini) ls.push_back(el2);
        return ls;
    }
};