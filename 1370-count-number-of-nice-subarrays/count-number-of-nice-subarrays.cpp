class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        int ans1 = 0;
        int ans2 = 0;
      for(int j=0;j<nums.size();j++){
            cnt1+=nums[j]%2;
            while(cnt1>k){
                cnt1-=nums[i]%2;
                i++;
            }
            ans1+=j-i+1;
      }
      i=0;
      k=k-1;
          for(int j=0;j<nums.size();j++){
            cnt2+=nums[j]%2;
            while(cnt2>k){
                cnt2-=nums[i]%2;
                i++;
            }
            ans2+=j-i+1;
      }
      return ans1-ans2;
    }
};