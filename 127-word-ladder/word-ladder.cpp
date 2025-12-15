class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& word) {
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        unordered_set<string>st(word.begin(),word.end());
        st.erase(beginWord);
        while(!q.empty()){
            string node = q.front().first;
            int dis = q.front().second;
            q.pop();
            if(node==endWord) return dis;
            for(int i=0;i<node.size();i++){
                char original = node[i];
            for(char ch = 'a';ch<='z';ch++){
                node[i]=ch;
                if(st.find(node)!=st.end()){
                    st.erase(node);
                    q.push({node,dis+1});
                }
            }
            node[i] = original;
            }
        }
        return 0;
    }
};