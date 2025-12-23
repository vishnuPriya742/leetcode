class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
        for(int i=0;i<arr.size();i++){
            int num = ceil(((i+1)*(n-i))/2.0);
            sum+=num*arr[i];
        }
        return sum;
    }
};