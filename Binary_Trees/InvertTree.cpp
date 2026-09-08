class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        TreeNode* temp = invertTree(root->right);
        root->right = invertTree(root->left);
        root->left = temp;
        return root;
    }

    // void invert(TreeNode* root) {
    //     if(root == NULL) return;
    //     swap(root->left,root->right);
    //     invert(root->left);
    //     invert(root->right);
    // }
    // TreeNode* invertTree(TreeNode* root) {
    //     invert(root);
    //     return root;
    // }
};
