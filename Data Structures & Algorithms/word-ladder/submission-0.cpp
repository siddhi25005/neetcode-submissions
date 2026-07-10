class Solution {
public:
    int ladderLength(string beginw, string endw, vector<string>& word) {
        queue<pair<string,int>>q;
        q.push({beginw,1});
        unordered_set<string>st(word.begin(),word.end());
        st.erase(beginw);
        
        while(!q.empty()) {
            string word=q.front().first;
            int steps=q.front().second;
            q.pop();
            if(word==endw) return steps;
            for(int i=0;i<word.size();i++) {
                char original=word[i];
                for(char c='a';c<='z';c++) {
                    word[i]=c;
                    if(st.find(word)!=st.end()) {
                        st.erase(word);
                        q.push({word,steps+1});
                    }
                    
                }
                word[i]=original;
            }
        }
        return 0;
    }
};
