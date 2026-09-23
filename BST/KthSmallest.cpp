class Solution {
  public:
    void dfs(Node* root, vector<int>& ans){
        if(root == NULL) return;
        dfs(root->left,ans);
        ans.push_back(root->data);
        dfs(root->right,ans);
    }
    int kthSmallest(Node* root, int k) {
        vector<int> ans;
        dfs(root,ans);
        return (k<=ans.size()) ? ans[k-1] : -1;
    }
};
