class Solution {
public:
void fun(int i,int j, vector<vector<int>>& grid,vector<vector<int>>& visted,int m , int n){
    queue<pair<int,int>>q;
    q.push({i,j});
    int a[4] = {-1,0,1,0};
    int b[4] = {0,1,0,-1};
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            int nr = row+a[k];
            int nc = col+b[k];
            if(nr>=0 && nr<m && nc>=0 && nc<n && visted[nr][nc]==0 && grid[nr][nc]==1){
                visted[nr][nc]=1;
                q.push({nr,nc});
                cout<<nr<<nc;
            }
        }
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>visted(m,vector<int>(n,0));
        for(int i=0;i<n;i++){
            if(grid[0][i]==1 && visted[0][i]!=1){
                visted[0][i]=1;
                fun(0,i,grid,visted,m,n);
            }
        }
        for(int i=1;i<m;i++){
            if(grid[i][n-1]==1 && visted[i][n-1]!=1){
                visted[i][n-1]=1;
                fun(i,n-1,grid,visted,m,n);
            }
        }
        for(int i=n-2;i>=0;i--){
            if(grid[m-1][i]==1 && visted[m-1][i]!=1){
                visted[m-1][i]=1;
                fun(m-1,i,grid,visted,m,n);
            }
        }
        for(int i=m-2;i>0;i--){
            if(grid[i][0]==1 && visted[i][0]!=1){
                visted[i][0]=1;
                fun(i,0,grid,visted,m,n);
            }
        }
        int cnt = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && visted[i][j]!=1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};