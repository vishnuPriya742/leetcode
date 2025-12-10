class Solution {
public:
    int countPermutations(vector<int>& c) {
        int n = c.size();
        int mini = INT_MAX;
        for(int i=1;i<n;i++){
            mini = min(mini,c[i]);
        }
        if(mini<=c[0]){
            return 0;
        }
        int ans = 1;
        int mod = 1000000007;
        for(int i=2;i<n;++i){
            ans = (long long)ans*i%mod;
        }
        // ans = ans*12;
        return ans;
    }

};