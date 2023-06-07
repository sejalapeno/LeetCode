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
class Solution {
public:
    int count=0;
    int goodNodes(TreeNode* root) {
        if(!root)return count;
      return countGoodNode(root,INT_MIN);
     
    }
    
    int countGoodNode(TreeNode* root,int maxforthisstep){        
        if(!root)return count;

        if(root->val>=maxforthisstep){
            count++;
           
        }

        countGoodNode(root->left,max(root->val,maxforthisstep));
        countGoodNode(root->right,max(root->val,maxforthisstep));

   return count;
}
    
};