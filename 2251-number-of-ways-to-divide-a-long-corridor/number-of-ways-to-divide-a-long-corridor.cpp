class Solution {
public:
    int numberOfWays(string corridor) {
        const int mod = 1e9+7;
        int chaircnt = 0;
        int idx = -1;
        long long ans = 1;
        for(int i=0;i<corridor.size();i++){
            if(corridor[i]=='S'){
                chaircnt++;
                if(chaircnt==2){
                    chaircnt=0; 
                    idx = i;
                }
                else if(chaircnt==1 && idx!=-1){
                        ans*=(i-idx);
                        ans=ans%mod;
                        }
                    }
                }
        if(chaircnt==1 || idx==-1){
            return 0;
        }
        return (int)ans;
    }
};