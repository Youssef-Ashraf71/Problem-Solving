/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
vector<int>ans;
    void DFS(Node* root){
       if(root==NULL) { return; } // reached a leaf node
       ans.push_back(root->val);
       for(int i=0;i<root->children.size();i++){
           DFS(root->children[i]); // dfs traversing
       }
    }
    vector<int> preorder(Node* root) {
        DFS(root); // dfs from the root
        return ans;

    }
};