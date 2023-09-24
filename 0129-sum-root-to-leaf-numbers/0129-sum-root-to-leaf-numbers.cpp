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
    void func(TreeNode*root,vector<int>& v,int num){
        if(root==NULL){
            return;
        }
        if (root->left==NULL &&root->right==NULL) {
            v.push_back(num*10+root->val);
           return;
        }
        func(root->right,v,num*10+root->val);
        func(root->left,v,num*10+root->val);
        
        
    }
    int sumNumbers(TreeNode* root) {
        vector<int>v;
        func(root,v,0);
        int sum=0;
        for(auto i:v){
            sum+=i;
         
        }
        return sum;
        
    }
};