class Solution {
public:
    int longestSubstring(string s, int k) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']<k){
                int left = longestSubstring(s.substr(0,i),k);
                int right = longestSubstring(s.substr(i+1),k);
                return max(left,right);
            }
        }
       return s.size();
    }
};