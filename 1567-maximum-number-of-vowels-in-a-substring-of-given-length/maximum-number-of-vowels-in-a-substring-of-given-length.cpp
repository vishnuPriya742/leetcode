class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int vowelcnt = 0;
        int ans = 0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowelcnt++;
            }
        }
        ans = max(ans,vowelcnt);
        int l = 0;
        for(int i=k;i<n;i++){
             if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u'){
                vowelcnt--;
            }
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowelcnt++;
            }
            ans = max(ans,vowelcnt);
            l++;
        }
        return ans;
    }
};