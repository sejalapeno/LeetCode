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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)
            return ans;

        while(!q.empty())
        {
            int x=q.size();
            vector<int>v;

            while(x--)
            {
                TreeNode* front = q.front();
                q.pop();
                
                if(front->left!=NULL){
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
                 v.push_back(front->val);
            }
            
                ans.push_back(v);

        }
  return ans;
   

    
      
}

};