 class Solution{
public:
 vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int>bld;
        if(root==NULL)return ans;
        queue<TreeNode*>bfs;
        bfs.push(root);
        bfs.push(nullptr); // this for checking emptyness
        while(bfs.size()){
            if(bfs.front()!=NULL){
              TreeNode* cur = bfs.front(); bfs.pop();
              bld.push_back(cur->val);
              if(cur->left!=NULL){
               bfs.push(cur->left);
              }
              if(cur->right!=NULL){
               bfs.push(cur->right);
              }
            }
            else{
                ans.push_back(bld);
                bfs.pop();
                bfs.push(NULL);
                if(bfs.front()==NULL) return ans;
                bld.clear();
            }
        }
        return ans;
    }
 };