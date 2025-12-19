class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int n = arr.size();
        int sum = 0;
        int cnt = 0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if(sum/k>=th){
            cnt++;
        }
        int l = 0;
        for(int i=k;i<n;i++){
            sum-=arr[l];
            l++;
            sum+=arr[i];
            if(sum/k>=th){
                cnt++;
            }
        }
        return cnt;
    }
};