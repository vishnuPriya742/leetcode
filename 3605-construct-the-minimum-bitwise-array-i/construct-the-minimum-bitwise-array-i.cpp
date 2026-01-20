class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int j=0;
            int a=0;
          while(j<nums[i]){
            int cmp=j|(j+1);
            if(cmp==nums[i]){
               a=j;
                break;
            }
            j++;
          }
          if(a>0){
            ans.push_back(a);
          }
          else{
            ans.push_back(-1);
          }
        }
        return ans;
    }
};