class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int maxpair = 0;
        while(i<n/2){
            maxpair = max(maxpair,nums[i]+nums[j]);
            i++;
            j--;
        }
        return maxpair;
    }
};