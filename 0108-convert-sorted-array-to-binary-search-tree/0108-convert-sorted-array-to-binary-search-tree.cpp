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
    //from sorted list or array to make balanced binary tree always use binary search approach as mid elemnt as root and all its left will be smaller can be choosen as mid left same for right ones and thus height remains same on both sides...thus tree would get formed
    TreeNode* func(vector<int>& nums,int start,int end){
        if(start>end)
        {return NULL;
        }
            
                  
        int mid=(start+end)/2;
        //making node
        TreeNode* ptr=new TreeNode(nums[mid]);
        //write mid-1 here not mid it is giving error because mid already get included...
        ptr->left=func(nums,start,mid-1);
        ptr->right=func(nums,mid+1,end);
        //this node will returned to occupy at left and right posn as above recursion.....
        return ptr;
        
       
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return func(nums,0,nums.size()-1);
        
    }
};