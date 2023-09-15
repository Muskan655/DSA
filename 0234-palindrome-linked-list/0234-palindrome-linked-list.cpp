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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        //first method is to directly create a vector and then check it as usual but it is taking extra memory .Second way is using fast slow pointer technsique in it we reverse first half using while loop and moving fast pointer till it get null then just compare 2 halfs
        vector<int>v;
        ListNode*temp=head;
        while(temp!=NULL){
           v.push_back(temp->val);
            temp=temp->next;
          
        }
        for(int i=0;i<(v.size())/2;i++){
            if(v[i]!=v[v.size()-i-1]){
                return false;
            }
        }
        return true;
        
    }
};