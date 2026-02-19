class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++){
            if(words[i].size()>=k){
            string cmp = words[i].substr(0,k);
            mp[cmp]++;
            }
        }
        int cnt = 0;
        for(auto i : mp){
            if(i.second!=1){
                cnt++;
            }
        }
        return cnt;
    }
};