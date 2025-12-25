class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(),h.end());
        int j = h.size()-1;
        int i = 0;
        long long sum = 0;
        int minus = 0;
        while(i<k){
            if(h[j]-minus>=0){
            sum+=(h[j]-minus);
                minus++;
            }
            i++;
            j--;
        }
        return sum;
    }
};