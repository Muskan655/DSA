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
       
        vector<vector<int>>v;
        if(root==NULL){
            return v;
        }
        vector<int>v1;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
         TreeNode*temp=q.front();
            q.pop();

         
         if(temp==NULL){
             v.push_back(v1);
            v1.clear();
             if(!q.empty()){q.push(NULL);}

         }
         
         else{v1.push_back(temp->val);
             if(temp!=NULL&&temp->left!=NULL){
             q.push(temp->left);

         }
         if(temp!=NULL&&temp->right!=NULL){
             q.push(temp->right);

         }}
        }
        return v; 
        
    }
};