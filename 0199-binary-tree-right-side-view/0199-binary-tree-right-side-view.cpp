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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return v;
        }
        
        while(!q.empty()){
            vector<int> data;
           int x=q.size();
            while(x--)
            {
                
                TreeNode* front=q.front();
                q.pop();
                
                 if(front->left!=NULL){
                    q.push(front->left);
                }
                
                 if(front->right!=NULL){
                    q.push(front->right);
                }
                  data.push_back(front->val);    
                
            }
            
        v.push_back(data.back());
        }
    
         return v;  
    }
 

};