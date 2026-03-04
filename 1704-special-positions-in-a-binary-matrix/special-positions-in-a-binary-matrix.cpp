class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>rows;
        for(int i=0;i<m;i++){
            int zerocnt = 0;
            int idx=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    zerocnt++;
                }
                else{
                    idx = j;
                }
            }
            if(zerocnt==n-1){
                rows.push_back(idx);
            }
        }
        int ans = 0;
        for(int i=0;i<rows.size();i++){
            int zerocnt = 0;
            for(int j=0;j<m;j++){
                if(mat[j][rows[i]]==0){
                    zerocnt++;
                }
            }
            if(zerocnt==m-1){
                ans++;
            }
        }
        return ans;
    }
};