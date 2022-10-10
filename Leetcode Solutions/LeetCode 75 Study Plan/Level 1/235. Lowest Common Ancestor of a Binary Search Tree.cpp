class Solution {
public:

    TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return NULL;
        if(root->val == p->val || root->val == q->val){
            return root;
        }
        int minm = min(p->val,q->val);
        int maxm = max(p->val,q->val);
           if(root->val < maxm && root->val > minm){
            return root;
        }
        if(root->val < minm){
            return LCA(root->right,p, q);
        }
        else{
        return LCA(root->left,p,q);
        }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        return LCA(root,p,q);
    }
};