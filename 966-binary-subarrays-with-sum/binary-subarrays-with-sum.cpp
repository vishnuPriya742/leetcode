class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt1 = 0,cnt2=0;
        int i=0;
        int j=0;
        int sum = 0;
        while(i<nums.size()){
            sum+=nums[i];
            while(sum>goal){
                sum-=nums[j];
                j++;
            }
            cnt1+=i-j+1;
            i++;
        }
        i=0;
        j=0;
        sum = 0;
        if(goal-1>=0){
        while(i<nums.size()){
            sum+=nums[i];
            while(sum>goal-1){
                sum-=nums[j];
                j++;
            }
            cnt2+=i-j+1;
            i++;
        }
        }
        return cnt1-cnt2;
    }
};