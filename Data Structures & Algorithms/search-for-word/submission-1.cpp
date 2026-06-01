class Solution {
public:
    bool f(vector<vector<char>>&arr,int i,int j,int k,string word) {
                if(k==word.size()) return true;
        if(i<0 || j<0 || i>=arr.size() || j>=arr[0].size() ||arr[i][j]!=word[k]) return false;

        char ch=arr[i][j];
        arr[i][j]='#';
        bool found=f(arr,i+1,j,k+1,word) || 
        f(arr,i,j+1,k+1,word) || 
        f(arr,i-1,j,k+1,word) ||
        f(arr,i,j-1,k+1,word);
        arr[i][j]=ch;
        return found;

    }
    bool exist(vector<vector<char>>& arr, string word) {
        int m=arr.size(),n=arr[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(f(arr,i,j,0,word)) return true;
            }
        }
        return false;
    }
};
