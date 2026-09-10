class Solution {
public:
    bool ans;
    int levels(TreeNode* root) {
        if(root == NULL) return 0;
        int left = levels(root->left);
        int right = levels(root->right);
        if(abs(left-right) > 1) ans = false; // **** IMPORTANT LINE
        return 1 + max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        ans = true; // true means balanced
        levels(root);
        return ans;
    }
    // int levels(TreeNode* root) {
    //     if(root == NULL) return 0;
    //     int left = levels(root->left);
    //     int right = levels(root->right);
    //     return 1 + max(left,right);
    // }
    // bool isBalanced(TreeNode* root) {
    //     if(root == NULL) return true;
    //     int left = levels(root->left);
    //     int right = levels(root->right);
    //     if(abs(left-right) > 1) return false;
    //     return isBalanced(root->left) and isBalanced(root->right);
    // }
};
