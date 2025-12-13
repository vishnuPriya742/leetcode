class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>graph2(n);
        vector<int>ans;
        vector<int>incoming(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                int node = graph[i][j];
                graph2[node].push_back(i);
                incoming[i]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(incoming[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto i : graph2[node]){
                incoming[i]--;
                if(incoming[i]==0){
                    q.push(i);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};