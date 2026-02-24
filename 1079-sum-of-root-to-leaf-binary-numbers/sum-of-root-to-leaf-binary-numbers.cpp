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
int dfs(TreeNode* node, int i){
    if(node==NULL){
        return 0;
    }
    i = i*2+node->val;
    if(node->left==NULL && node->right==NULL){
        return i;
    }
    int leftSum = dfs(node->left,i);
    int rightSum = dfs(node->right,i);
         return leftSum+rightSum;

}
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root,0);
    }
};