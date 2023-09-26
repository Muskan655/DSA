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
   int sumOfLeftLeaves(TreeNode* root){
    if (!root)
        return 0;

    int sum = 0;
       //consider left node of any node and if it is leaf add it to sum
    if (root->left && !root->left->left && !root->left->right)
        sum += root->left->val;
    //then go on traversing it to both right and left sides....
    sum+=sumOfLeftLeaves(root->left);
    sum+=sumOfLeftLeaves(root->right);

    return sum;
}

};