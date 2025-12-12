class Solution {
public:
void dfs(int i, vector<vector<int>>& adj,vector<bool>&visted,vector<bool>&path,bool &cycle){
        visted[i]=true;
        path[i] = true;
        for(auto j : adj[i]){
            if(visted[j]==true && path[j]==true){
                cycle = true;
            }
            if(visted[j]==false){
                dfs(j,adj,visted,path,cycle);
            }
        }
        path[i] = false;
}
    bool canFinish(int n, vector<vector<int>>& pre) {
        int m = pre.size();
        vector<bool>visted(2005);
        vector<vector<int>>adj(2005);
        vector<bool>path(2005);
        bool cycle = false;
        for(auto i : pre){
            int a = i[0];
            int b = i[1];
            adj[a].push_back(b);
        }
        for(int i=0;i<n;i++){
            if(visted[i]==0){
                dfs(i,adj,visted,path,cycle);
            }
        }
        if(cycle==true){
            return false;
        }
        return true;
    }
};