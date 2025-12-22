class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& que) {
        vector<vector<int>> adj(n);
        for (int i = 0; i < n - 1; i++) {
            adj[i].push_back(i + 1);
        }
        vector<int> vec;
        for (int i = 0; i < que.size(); i++) {
            int node1 = que[i][0];
            int node2 = que[i][1];
            adj[node1].push_back(node2);
            queue<int> q;
            q.push(0);
            vector<int> vis(n, -1);
            vis[0] = 0;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                for (auto i : adj[node]) {
                    if (vis[i] == -1) {
                        vis[i] = vis[node] + 1;
                        q.push(i);
                    }
                }
            }
            vec.push_back(vis[n - 1]);
        }
        return vec;
    }
};