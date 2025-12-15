class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 0;
        long long ans = 0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]-prices[i+1]==1){
                count++;
            }
            else{
                count = 0;
            }
            ans+=count;
        }
        return ans+prices.size();
    }
};