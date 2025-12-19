class Solution {
public:
void bfs(vector<vector<char>>& board,vector<vector<char>>& visted,int i,int j,int m,int n){
    int a[4] = {-1,0,1,0};
    int b[4] = {0,1,0,-1};
    visted[i][j] = 'O';
    queue<pair<int,int>>q;
    q.push({i,j});
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nr = row+a[i];
            int nc = col+b[i];
            if(nr>=0 && nr<m && nc>=0 && nc <n && visted[nr][nc]=='X' && board[nr][nc]=='O' ){
                visted[nr][nc] = 'O';
                q.push({nr,nc});
            }
        }
    }

}
       void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<char>>visted(m,vector<char>(n,'X'));
        for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
               bfs(board,visted,0,i,m,n);
            }
        }
        for(int i=1;i<m;i++){
            if(board[i][n-1]=='O'){
                bfs(board,visted,i,n-1,m,n);
            }
        }
        for(int i=0;i<n-1;i++){
            if(board[m-1][i]=='O'){
                bfs(board,visted,m-1,i,m,n);
            }
        }
        for(int i=1;i<m-1;i++){
            if(board[i][0]=='O'){
                bfs(board,visted,i,0,m,n);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j]=visted[i][j];
            }
        }
    }
};