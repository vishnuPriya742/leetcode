class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(auto x:nums){
            mp1[x]++;
        }
        for(auto i:mp1){
            mp2[i.second]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp2[mp1[nums[i]]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};