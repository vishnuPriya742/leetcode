class Solution {
public:
bool dfs(int i, vector<vector<int>>& adj,vector<bool>&visted,vector<bool>&path,bool &cycle,stack<int>&st){
        visted[i]=true;
        path[i] = true;
        for(auto j : adj[i]){
            if(visted[j]==true && path[j]==true){
                return true;
            }
           else if(visted[j]==false){
                if(dfs(j,adj,visted,path,cycle,st)) return true;
            }
        }
        st.push(i);
        path[i] = false;
        return false;
}
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        int m = pre.size();
        vector<bool>visted(n,false);
        vector<vector<int>>adj(n);
        vector<bool>path(n,false);
        bool cycle = false;
        vector<int>ans;
        stack<int>st;
        for(auto i : pre){
            int a = i[0];
            int b = i[1];
            adj[b].push_back(a);
        }
        for(int i=0;i<n;i++){
            if(visted[i]==0){
                if(dfs(i,adj,visted,path,cycle,st)==true){
                    return {};
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};