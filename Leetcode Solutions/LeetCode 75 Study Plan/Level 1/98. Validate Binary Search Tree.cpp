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

 #define ll long long
 bool GO(TreeNode* root,ll l, ll r){
      if(root==NULL) return 1;
      if(root->val<=l || root->val >=r ) return 0;
     return (GO(root->right,root->val,r) && GO(root->left,l,root->val) );
 }
class Solution {
public:
    bool isValidBST(TreeNode* root) {
          if(root->left == NULL && root->right == NULL)  return 1;
          return GO(root,LONG_MIN,LONG_MAX);

    }
};