class Solution {
public:
    int partitionString(string s) {
        int cnt = 0;
        int l = 0;
        int r = 0;
        unordered_map<int,int>mp;
        while(r<s.size()){
            mp[s[r]]++;
            if(mp[s[r]]>1){
                cnt++;
                while(l<r){
                mp[s[l]]--;
                l++;
            }
            }
           
            r++;
        }
        return cnt+1;
    }
};