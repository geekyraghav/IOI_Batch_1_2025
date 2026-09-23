class Solution {
  public:
    void dfs(Node* root, vector<int>& ans){
        if(root == NULL) return;
        dfs(root->left,ans);
        ans.push_back(root->data);
        dfs(root->right,ans);
    }
    bool isBST(Node* root) {
        vector<int> ans;
        dfs(root,ans);
        // check if inorder array is sorted or not
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i] >= ans[i+1]) return false;
        }
        return true;
    }
};
