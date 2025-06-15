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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = nullptr;
        for(int val : preorder) {
            root = insertBst(root, val);
        }
        return root;
    }

    TreeNode* insertBst(TreeNode* root, int val) {
        if(root == nullptr) {
            return new TreeNode(val);
        }
        if(val < root->val) {
            root->left = insertBst(root->left, val);
        } else {
            root->right = insertBst(root->right, val);
        }
        return root;
    }
};
