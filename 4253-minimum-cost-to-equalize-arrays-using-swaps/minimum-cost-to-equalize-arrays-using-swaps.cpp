class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]--;
        }
        int cnt = 0;
        for(auto m : mp){
            if(m.second%2!=0) return -1;
            else cnt+=abs(m.second/2);
        }
        return cnt/2;
    }
};