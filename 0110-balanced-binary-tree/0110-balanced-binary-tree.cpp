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

    int checkBalance(TreeNode *root,bool& res){

        if(!root || !res)
            return 0;

        int left_height=checkBalance(root->left,res);
        int right_height=checkBalance(root->right,res);

        if(abs(left_height-right_height)>1)
            res=false;

        return max(left_height,right_height)+1;
    }

    bool isBalanced(TreeNode* root) {
        bool res=true;
        checkBalance(root,res);
        return res;
        
    }
};