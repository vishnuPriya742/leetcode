/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
long long ans = INT_MIN, totalsum=0;
void fun1(TreeNode* root){
    if(root==nullptr) return;
    totalsum+=root->val;
    fun1(root->left);
    fun1(root->right);
}
int dfs(TreeNode* root){
    if(root==nullptr) return 0;
    int sum=root->val+dfs(root->left)+dfs(root->right);
    ans=max(ans,(totalsum-sum)*sum);
    return sum;
}

    int maxProduct(TreeNode* root) {
        int mod = 1e9+7;
        fun1(root);
        dfs(root);
        return ans%mod;
    }
};