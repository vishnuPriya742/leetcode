class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans = 0;
       for(int i=0;i<nums.size();i++){
        unordered_map<int,int>mp;
        int evencnt = 0;
        int oddcnt = 0;
        for(int j=i;j<nums.size();j++){
            mp[nums[j]]++;
        if(mp[nums[j]]==1 && nums[j]%2==0){
            evencnt++;
        }
        else if(mp[nums[j]]==1 && nums[j]%2==1){
            oddcnt++;
        }
        if(evencnt==oddcnt){
            ans=max(ans,j-i+1);
        }
        }
       } 
       return ans;
    }
};