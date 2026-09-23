class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL; // you can return root as well
        if(root->val < val){ // left wale aur bhi small honge, go right
            return searchBST(root->right,val);
        }
        else if(root->val > val){ // right wale aur bhi small honge, go left
            return searchBST(root->left,val);
        }
        else return root;
    }
};
