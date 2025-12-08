class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
       for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int cmp = (sqrt(i*i+j*j));
            if(cmp*cmp==i*i+j*j && cmp<=n){
                ans++;
            }
        }
       }
        return ans;
    }
};