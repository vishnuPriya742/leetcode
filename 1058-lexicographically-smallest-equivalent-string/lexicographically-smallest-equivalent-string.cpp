class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string b) {
        vector<vector<int>> graph(26);
        for (int i = 0; i < s1.size(); i++) {
            int u = s1[i] - 'a';
            int v = s2[i] - 'a';
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        string ans = "";
        for (char c : b) {
            queue<int> q;
            vector<bool> visited(26, false);
            int start = c - 'a';
            q.push(start);
            visited[start] = true;

            int smallest = start;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                smallest = min(smallest, node);
                for (int nei : graph[node]) {
                    if (!visited[nei]) {
                        visited[nei] = true;
                        q.push(nei);
                    }
                }
            }
            ans += char(smallest + 'a');
        }

        return ans;
    }
};
