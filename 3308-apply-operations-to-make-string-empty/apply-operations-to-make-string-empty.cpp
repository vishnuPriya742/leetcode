class Solution {
public:
    string lastNonEmptyString(string s) {
       unordered_map<char,int>mp;
       int maxi = 0;
       for(int i=0;i<s.size();i++){
          maxi = max(maxi,++mp[s[i]]);
       }
       string ans = "";
       unordered_map<char,int>mp1;
       for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            if(maxi==mp1[s[i]]){
                ans+=s[i];
            }
       }
       return ans;
    }
};