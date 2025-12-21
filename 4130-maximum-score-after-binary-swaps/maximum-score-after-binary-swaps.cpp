class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {
        priority_queue<int>pq;
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
             pq.push(nums[i]);
            if(s[i]=='1'){
                    sum+=pq.top();
                    pq.pop();
            }
        }
        return sum;
    }
};