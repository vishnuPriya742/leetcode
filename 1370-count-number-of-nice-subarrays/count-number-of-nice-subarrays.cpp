class Solution {
public:
int fun(vector<int>&nums,int k){
      int i = 0;
        int cnt = 0;
        int ans = 0;
      for(int j=0;j<nums.size();j++){
            cnt+=nums[j]%2;
            while(cnt>k){
                cnt-=nums[i]%2;
                i++;
            }
            ans+=j-i+1;
      }
      return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return fun(nums,k)-fun(nums,k-1);
    }
};