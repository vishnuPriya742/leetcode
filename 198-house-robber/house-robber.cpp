class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec(n+1,0);
        if(n==1){
            return nums[0];
        }
        if(n==2){
          return  max(nums[0],nums[1]);
        }
        int ans = 0;
        vec[1] = nums[0];
        vec[2] = vec[0]+nums[1];
        for(int i=2;i<n;i++){
           vec[i+1] = max(vec[i-2]+nums[i],vec[i-1]+nums[i]);
           ans = max(vec[i],vec[i+1]);
        }
        return ans;
    }
};