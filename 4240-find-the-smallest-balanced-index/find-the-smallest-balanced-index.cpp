class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        vector<long long>sum(n);
        vector<long long>product(n);
        sum[0] = 0;
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]+nums[i-1];
        }
        product[n-1] = 1;
        long long mod = 1e18;
        for(int i=n-2;i>=0;i--){
            if(product[i+1]>mod/nums[i+1]){
                product[i] = mod;
            }
            else{
            product[i]=product[i+1]*nums[i+1];
            }
        }
        for(int i=0;i<n;i++){
            if(sum[i]==product[i]){
                return i;
                break;
            }
        }
        return -1;
    }
};