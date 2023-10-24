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
    //in this problem we will simply do level-order traversal using queue....
    vector<int> largestValues(TreeNode* root) {
        if (root == NULL) {
            return {};
        }

        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>ans;
        int maxi=INT_MIN;
       
        while(!q.empty()){
            TreeNode*topi=q.front();
            q.pop();
            //as if top not null means we are in level go on inserting their left and right node...and comparing this top value for a level jo max insert it in vector....
            if(topi!=NULL){
                maxi=max(maxi,topi->val);
                if(topi->left){
                q.push(topi->left);}
                if(topi->right){
               
                q.push(topi->right);
                }
            }
            //when top null matlab iss level ke sb child nodes get inserted so agr top ke pop ke baad q empty nhi hota then only push null as otherwise it indicates end...
            else {
                ans.push_back(maxi);
                maxi = INT_MIN;

                if (!q.empty()) {
                    q.push(NULL);
                }
            }
            
        }
        return ans;
        
        
    }
};