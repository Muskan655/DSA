class Solution {
public:
    // greedy approach here... just see for simplest solution which is optimal and dp not needed in it...
    bool canJump(vector<int>& nums) {
        int maxrange=0;
        //iterate and check if hum kisi index pr phunch hi nhi skte even maxrange ko leke bhi thus hum aage ja hi nhi paenge hence return false else update if new maxrange or maxjump comes...
        for(int i=0;i<nums.size();i++){
            if(i>maxrange){
                return false;
            }
            else{
                maxrange=max(maxrange,i+nums[i]);
            }
            
        }
        return true;
        
        
        
    }
};