class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int sum = 1+nums[i];
            int cnt = 2;
           for(int j=2;j*j<=nums[i];j++){
            if(nums[i]%j==0){
                int d1 = j;
                int d2 = nums[i]/j;
                if(d1==d2){
                    sum+=d1;
                    cnt+=1;
                }
                else{
                    sum+=d1+d2;
                    cnt+=2;
                }
                if(cnt>4) break;;
            }
           }
            if(cnt==4){
                ans+=sum;
            }
            else{
                ans+=0;
            }
        }
        return ans;
    }
};