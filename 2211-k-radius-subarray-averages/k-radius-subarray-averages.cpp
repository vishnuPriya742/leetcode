class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long avgSum = 0;
        int n = nums.size();
        vector<int>avg(n,-1);
        if(n<2*k+1){
            return avg;
        }
        if(k==0){
            return nums;
        }
        int size = (2*k)+1;
        for(int i=0;i<size;i++){
            avgSum+=nums[i];
        }
        int r = k;
        avg[k] = avgSum/size;
        k++;
        for(int j=size;j<n;j++){
            avgSum-=nums[j-size];
            avgSum+=nums[j];
            avg[k]=avgSum/size;
            k++;
        }
        return avg;
    }
};