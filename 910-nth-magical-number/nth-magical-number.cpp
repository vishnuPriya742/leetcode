class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long mod = 1e9+7;
        long long ablcm  = lcm(a,b);
        long long low = min(a,b);
        long long high = n* (long long) min(a,b);
        while(low<=high){
            long long mid = low+(high-low)/2;

            long long p = mid/a;
            long long q = mid/b;
            long long common = mid/ablcm;

            long long total = p+q-common;

            if(total == n && (mid%a==0 || mid%b==0)){
                return mid%mod;
            }
            else if(total<n){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return 0;
    }
};