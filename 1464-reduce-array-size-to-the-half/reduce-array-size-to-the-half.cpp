class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int x : arr) {
            mp[x]++;
        }
        vector<int> freq;
        for (auto &p : mp) {
            freq.push_back(p.second);
        }
        sort(freq.begin(), freq.end(), greater<int>());
        int removed = 0;
        int cnt = 0;
        int half = arr.size() / 2;
        for (int f : freq) {
            removed += f;
            cnt++;
            if (removed >= half) break;
        }
        return cnt;
    }
};
