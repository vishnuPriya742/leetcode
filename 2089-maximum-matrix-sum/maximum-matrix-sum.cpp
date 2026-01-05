class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int negativecnt = 0;
        int num = INT_MAX;
        int row = 0;
        int col = 0;
        long long sum = 0;
        int zerocnt = 0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]==0){
                    zerocnt++;
                }
                if(matrix[i][j]<0){
                    negativecnt++;
                }
                num = min(num,abs(matrix[i][j]));
            }
        }
        cout<<sum;
        if(negativecnt%2==0){
            return sum;
        }
        if(zerocnt>0){
            return sum;
        }
        return sum-2*num;
    }
};