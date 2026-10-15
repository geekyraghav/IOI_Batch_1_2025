class Solution {
  public:
    int n;
    bool isMaxHeap(Node* root) {
        if(root == NULL) return true;
        int left = (root->left) ? root->left->data : INT_MIN;
        int right = (root->right) ? root->right->data : INT_MIN;
        if(root->data <= left or root->data <= right) return false;
        return isMaxHeap(root->left) && isMaxHeap(root->right);
    }
    bool isCBT(Node* root, int idx) {
        if(root == NULL) return true;
        if(idx > n) return false;
        return isCBT(root->left,idx*2) and isCBT(root->right,idx*2+1);
    }
    int size(Node* root) {
        if(root == NULL) return 0;
        return 1 + size(root->left) + size(root->right);
    }
    bool isHeap(Node* root) {
        n = size(root);
        return isMaxHeap(root) && isCBT(root,1);
    }
};
