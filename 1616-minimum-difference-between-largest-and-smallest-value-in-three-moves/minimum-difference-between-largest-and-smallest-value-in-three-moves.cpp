class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size()-4;
        int diff = INT_MAX;
        while(l<4){
            diff = min(diff,nums[r]-nums[l]);
            l++;
            r++;
        }
        return diff;
    }
};