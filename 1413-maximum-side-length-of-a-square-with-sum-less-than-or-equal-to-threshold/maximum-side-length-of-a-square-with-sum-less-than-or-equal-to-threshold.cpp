class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> pref(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                pref[i][j] = mat[i - 1][j - 1]+ pref[i - 1][j]+ pref[i][j - 1]-pref[i - 1][j - 1];
            }
        }
        int maxLen = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                int k = maxLen + 1;
                if (i >= k && j >= k) {
                    int squareSum =pref[i][j]-pref[i - k][j]-pref[i][j - k]+pref[i - k][j - k];
                     if (squareSum <= threshold) {
                        maxLen = k;
                    }
                }
            }
        }
        return maxLen;
    }
};