class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& m, int firstPerson) {
        vector<vector<pair<int,int>>> adj(n);
          sort(m.begin(), m.end(), [] (const vector<int> &a, const vector<int> &b) {
            return a[2] < b[2];
        });
        for (auto &e : m) {
            int u = e[0], v = e[1], t = e[2];
            adj[u].push_back({v, t});
            adj[v].push_back({u, t});  
        }
        vector<int> visited(n, INT_MAX);
        queue<pair<int,int>> q; 
        q.push({0, 0});
        q.push({firstPerson, 0});
        visited[0] = 0;
        visited[firstPerson] = 0;

        while (!q.empty()) {
            int node = q.front().first;
            int time = q.front().second;
            q.pop();
            for (auto edge : adj[node]) {
                int next = edge.first;
                int meetTime = edge.second;
                if (visited[next]>meetTime && meetTime >= time) {
                    // visited[next] = meetTime;
                    q.push({next, meetTime});
                    visited[next] = meetTime;
                }
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (visited[i]!=INT_MAX) ans.push_back(i);
        }
        return ans;
    }
};
