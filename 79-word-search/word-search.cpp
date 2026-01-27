class Solution {
public:
    bool dfs(int i, int j,int idx, vector<vector<char>>& mat, string& word) {
        if(idx==word.size()) return true;
        if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || mat[i][j]!=word[idx]) return false;
        
        char temp = mat[i][j];
        mat[i][j] = '0';
        
        bool found = dfs(i+1,j,idx+1,mat,word) || 
                     dfs(i-1,j,idx+1,mat,word) ||
                     dfs(i,j+1,idx+1,mat,word) ||
                     dfs(i,j-1,idx+1,mat,word);
                     
        mat[i][j] = temp;
        return found;
                     

    }

    bool exist(vector<vector<char>>& mat, string& word) {
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (dfs(i, j, 0,mat, word))
                    return true;
            }
        }
        return false;
    }
};
