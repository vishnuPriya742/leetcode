class Solution {
public:
    void dfs(TreeNode* root, int level, vector<int>& levelSum) {
        if (root == nullptr) return;
        if (level == levelSum.size()) {
            levelSum.push_back(root->val);
        } else {
            levelSum[level] += root->val;
        }

        dfs(root->left, level + 1, levelSum);
        dfs(root->right, level + 1, levelSum);
    }

    int maxLevelSum(TreeNode* root) {
        vector<int> levelSum;
        dfs(root, 0, levelSum);
        int maxSum = levelSum[0];
        int ansLevel = 1;

        for (int i = 1; i < levelSum.size(); i++) {
            if (levelSum[i] > maxSum) {
                maxSum = levelSum[i];
                ansLevel = i + 1; 
            }
        }

        return ansLevel;
    }
};
