class Solution {
public:
    int numOfWays(int n) {
        long long same = 6;
        long long diff = 6;
        int mod = 1e9+7;
        if(n==1){
            return same+diff;
        }
        for(int i=2;i<=n;i++){
            long long newsame = (3*same)%mod+(2*diff)%mod;
            long long newdiff = (2*same)%mod+(2*diff)%mod;
            same = newsame;
            diff = newdiff;
        }
        return (same+diff)%mod;
    }
};