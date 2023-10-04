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
     bool isSameTree(TreeNode* a, TreeNode* b) {
        if(a==NULL && b==NULL){
            return true;
        }
       if(a==NULL||b==NULL){
         return false;  
       }
        //dont get confused in recursion as check given node value equal and then move to corner then inside elemnt in recursion just focus on base case or small subproblem as all other complex cases will automatically implemented by using these as main rpoblem divided into subproblem to solve it so need not to worry about it ......
        return (a->val==b->val)&&isSameTree(a->left,b->right)&&isSameTree(a->right,b->left);
            
     }
        bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;

         return isSameTree(root->left,root->right);
     }
};
