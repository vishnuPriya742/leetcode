class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        unordered_map<char,int>mp;
        int ans = 0;
        int maxfrq = 0;
        int l = 0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            maxfrq = max(maxfrq,mp[s[r]]);
            while((r-l+1)-maxfrq>k){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};