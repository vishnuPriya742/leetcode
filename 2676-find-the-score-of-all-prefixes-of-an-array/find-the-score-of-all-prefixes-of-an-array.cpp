class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
      int n = nums.size();
      vector<long long>prefix(n,0);
      int maxi = 0;
      long long sum = 0;
      for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
        prefix[i] = maxi+nums[i]+sum;
        sum=prefix[i];
      }
      return prefix;
    }
};