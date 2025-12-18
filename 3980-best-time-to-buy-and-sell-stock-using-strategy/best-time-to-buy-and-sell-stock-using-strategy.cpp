class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& s, int k) {
        long long sum = 0;
        long long totalSum = 0;
        long long ans = 0;
        int l = 0, r = k/2;
        for(int i=0;i<prices.size();i++){
            sum+=(prices[i]*s[i]);
        }
        long long cmpSum = 0;
        for(int i=0;i<k;i++){
            if((k/2)<=i){
                cmpSum+=prices[i];
            }
            totalSum+=prices[i]*s[i];
        }
        long long next = sum-totalSum+cmpSum;
        ans = max(sum,next);
        for(int i=k;i<prices.size();i++){
            totalSum-=prices[l]*s[l];
            l++;
            totalSum+=prices[i]*s[i];
            cmpSum+=prices[i];
            cmpSum-=prices[r];
            r++;
            ans = max(ans,sum-totalSum+cmpSum);
        }

        return ans;
    }
};