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
void inorder(TreeNode* root, vector<int>&vec){
    if(root==nullptr) return;
    inorder(root->left,vec);
    vec.push_back(root->val);
    inorder(root->right,vec);
}
TreeNode* NewBST(vector<int>&vec,int start,int end){
    if(start>end) return 0;
    int mid = start+(end-start)/2;

    TreeNode* left = NewBST(vec,start,mid-1);
    TreeNode* right = NewBST(vec,mid+1,end);

    return new TreeNode(vec[mid],left,right);
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>vec;
        inorder(root,vec);
        int n = vec.size();
        return NewBST(vec,0,n-1);
    }
};