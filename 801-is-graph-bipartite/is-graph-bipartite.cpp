class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>visted(n,-1);
        for(int i=0;i<n;i++){
        if(visted[i]==-1){
        visted[i]=0;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int next : graph[node]){
                if(visted[next]==-1){
                    visted[next]=!visted[node];
                    q.push(next);
                }
                else if(visted[node]==visted[next]){
                    return false;
                }
              }
           }
        }
        }
        return true;
    }
};