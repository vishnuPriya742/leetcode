class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int j=1;
            int a = 0;
            if(nums[i]%2==0){
                ans.push_back(-1);
            }
          else{
          while((nums[i]&j)!=0 ){
            a=nums[i]-j;
            j<<=1;
          }
          ans.push_back(a);
        }
        }
        return ans;
    }
};