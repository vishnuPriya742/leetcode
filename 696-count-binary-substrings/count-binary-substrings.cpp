class Solution {
public:
    int countBinarySubstrings(string s) {
        if(s.size()==1){
            return 0;
        }
       int curr = 1;
       int prev = 0;
       int cnt = 0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                curr++;
            }
            else{
                prev = curr;
                curr = 1;
            }
            if(curr<=prev){
                cnt++;
            }
        }
        return cnt;
    }
};