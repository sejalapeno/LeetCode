/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

   
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        //declare dynamic array v
        //we convert LL to array
        while(head){
            v.push_back(head->val);
            //since it is singly LL only travel fwd is possible
            //push the value into array v
            head=head->next;
        }
        return recursive(0,v.size()-1,v);
    }

    TreeNode* recursive(int l , int h,vector<int>&v){
        if(l>h)
            return NULL;

        int mid=(l+h)/2;

        TreeNode *root=new TreeNode(v[mid]);

        root->left=recursive(l,mid-1,v);
        root->right=recursive(mid+1,h,v);
        return root;

    }
};




