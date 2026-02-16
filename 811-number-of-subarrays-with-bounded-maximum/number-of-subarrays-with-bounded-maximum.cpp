class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int cnt = 0;
        int l = 0;
        int r = 0;
        int sum = 0;
        while(r<nums.size()){
            if(nums[r]>=left &&  nums[r]<=right){
                sum= r-l+1;
            }
            else if(nums[r]>right){
                l=r+1;
                sum=0;
            }
            cnt+=sum;
            r++;
        }
        return cnt;
    }
};