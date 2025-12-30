class Solution {
public:
    bool fun(int i, int j, vector<vector<int>>& grid) {
        vector<int> freq(10, 0);
        for (int row = i; row < i + 3; row++) {
            for (int col = j; col < j + 3; col++) {
                int num = grid[row][col];
                if (num < 1 || num > 9 || freq[num] > 0) {
                    return false;
                }
                freq[num]++;
            }
        }
        int sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
        if (sum != grid[i + 1][j] + grid[i + 1][j + 1] + grid[i + 1][j + 2]) {
            return false;
        }
        if (sum != grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2]) {
            return false;
        }
        if (sum != grid[i][j] + grid[i + 1][j] + grid[i + 2][j]) {
            return false;
        }
        if (sum != grid[i][j + 1] + grid[i + 1][j + 1] + grid[i + 2][j + 1]) {
            return false;
        }
        if (sum != grid[i][j + 2] + grid[i + 1][j + 2] + grid[i + 2][j + 2]) {
            return false;
        }
        if (sum != grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2]) {
            return false;
        }
        if (sum != grid[i][j + 2] + grid[i + 1][j + 1] + grid[i + 2][j]) {
            return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int cnt = 0;
        for (int i = 0; i <= row - 3; i++) {
            for (int j = 0; j <= col - 3; j++) {
                if (fun(i, j, grid)) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};