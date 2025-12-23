class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end(),[](auto &a, auto &b) {
                 return a[1] < b[1]; 
             });

        int n = events.size();
        vector<int> prefix(n);
        prefix[0] = events[0][2];
        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], events[i][2]);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int start = events[i][0];
            int val = events[i][2];
            int low = 0, high = n - 1;
            int idx = -1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (events[mid][1] < start) {
                    idx = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            if (idx != -1)
                ans = max(ans, prefix[idx] + val);
            else
                ans = max(ans, val);
        }

        return ans;
    }
};
