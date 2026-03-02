class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>zero;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=n-1;j>=0;j--){
                if(!grid[i][j]) cnt++;
                else break;
            }
            zero.push_back(cnt);
        }
        int ans=0;
        int total=n-1;
        for(int i=0;i<n;i++){
            int target=-1;
            for(int j=i;j<n;j++){
                if(zero[j]>=total){
                    target=j;
                    break;
                }
            }
            if(target==-1) return -1;

            for(int j=target;j>i;j--){
                swap(zero[j],zero[j-1]);
                ans++;
            }
            total--;
        }
        return ans;
    }
};